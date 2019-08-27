import opts

class Command
	var name: String
	var options = new OptionContext

	var parent_command: nullable Command = null
	var sub_commands = new Array[Command]

	fun add_option(option: Option) do
		options.add_option(option)
	end

	fun add_command(command: Command) do
		command.parent_command = self
		sub_commands.add command
	end

	fun full_name: String do
		var parent = parent_command
		if parent == null then return name
		return "{parent.full_name} {name}"
	end

	fun parse(argv: Collection[String]) do
		options.parse(argv)

		# var opts = new HashMap[String, String]
		# for opt in options.options do opts[opt.names.first] = (opt.value or else "null").to_s
		# print "in: {name} [{opts.join(", ", ": ")}] {args}"

		var args = options.rest
		if args.not_empty then
			for cmd in sub_commands do
				if cmd.name == args.first then
					cmd.parse(args.subarray(1, args.length - 1))
					return
				end
			end
		end

		run(args)
	end

	fun run(args: Collection[String]) do
		var opts = new HashMap[String, String]
		for opt in options.options do opts[opt.names.first] = (opt.value or else "null").to_s
		print "{full_name} [{opts.join(", ", ": ")}] {args}"
	end
end

fun git_cmd: Command do
	var git  = new Command("git")

	git.add_command new Command("init")
	git.add_command new Command("clone")
	git.add_command new Command("status")

	var git_add = new Command("add")
	git_add.add_option(new OptionBool("A", "-A"))
	git.add_command git_add


	return git
end

var cmds = [
	["git init", "Initialize a local Git repository"],
	["git clone ssh://git@github.com/[user]/[repository-name].git", "Create a local copy of a remote repo"],
	["git status", "Check status"],
	["git add [file-name.txt]", "Add a file to the staging area"],
	["git add -A", "Add all new and changed files to the staging area"],
	["git commit -m [commit-message]", "Commit changes"],
	["git rm -r [file-name.txt]", "Remove a file (or folder)"],
	["git branch", "List branches (the asterisk denotes the current branch)"],
	["git branch -a", "List all branches (local and remote)"],
	["git branch [branch-name]", "Create a new branch"],
	["git branch -d [branch-name]", "Delete a branch"],
	["git push origin --delete [branch-name]", "Delete a remote branch"],
	["git checkout -b [branch-name]", "Create a new branch and switch to it"],
	["git checkout -b [branch-name] origin/[branch-name]", "Clone a remote branch and switch to it"],
	["git checkout [branch-name]", "Switch to a branch"],
	["git checkout -", "Switch to the branch last checked out"],
	["git checkout -- [file-name.txt]", "Discard changes to a file"],
	["git merge [branch-name]", "Merge a branch into the active branch"],
	["git merge [source-branch] [target branch]", "Merge a branch into a target branch"],
	["git stash", "Stash changes in a dirty working directory"],
	["git stash clear", "Remove all stashed entries"],
	["git push origin [branch-name]", "Push a branch to your remote repository"],
	["git push -u origin [branch-name]", "Push changes to remote repository (and remember the branch)"],
	["git push", "Push changes to remote repository (remembered branch)"],
	["git push origin --delete [branch-name]", "Delete a remote branch"],
	["git pull", "Update local repository to the newest commit"],
	["git pull origin [branch-name]", "Pull changes from remote repository"],
	["git remote add origin ssh://git@github.com/[user]/[repository-name].git", "Add a remote repository"],
	["git remote set-url origin ssh://git@github.com/[user]/[repository-name].git", "Set a repository's origin"],
	["git log", "View changes"],
	["git log --summary", "View changes (detailed)"],
	["git diff [source-branch] [target-branch]", "Preview changes before merging"]
]

for args in cmds do
	var root = new Command("$")
	root.add_command(git_cmd)

	root.parse(args.first.split(" "))
end
