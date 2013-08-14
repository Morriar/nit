// Default values
var defaultRepo;
var defaultBranch;



// Check if a comment is editing
window.onbeforeunload = function() {
	if(ui.openedComments > 0){
    	return 'Are you sure you want to leave this page?';
	}
};

$(document).ready(function() {
	// set ui elements
	ui = new GitHubUI();
	ui.init();

	// check cookie at startup
	var cookie = new Cookie();
	var infos = cookie.getCookieInfos();
	//checkCookie()
	if(infos) {
		githubAPI = new GitHubAPI(infos.username, infos.password, infos.repo)
		githubAPI.currentBranch = infos.currentBranch;
		ui.activate();
		console.log("Session started from cookie (current branch: " + infos.currentBranch + ")");
		
	} else {
		console.log("No cookie found");
	}


	/*//Close Popups and Fade Layer
	$('body').on('click', 'a.close, #fade', function() {
		if(editComment > 0){ editComment -= 1; }
		$('#fade , #modal').fadeOut(function() {
			$('#fade, a.close').remove();  
		});		
		$('#modalQuestion').hide();
		$('#chkSignedOff').attr('checked', false);
		removeSignedOff();
	});*/

	/*$('#loginAction').click(function(){
		var text;
		var url;
		var line;
		// Look if the customer is logged
		if(!sessionStarted){
			ui.openModalBox("You need to be loggued before commit something");
			$('.popover').show();
			return;
		}
		else{ userB64 = "Basic " + getUserPass("logginNitdoc"); }
		// Check if repo exist
		isRepoExisting();
		if(repoExist){
			isBranchExisting();
			if(branchExist){
				editComment -= 1;
				commitMessage = $('#commitMessage').val().replace(/\r?\n/g, '\\n').replace(/\t/g, '\\t').replace(/\"/g,'\\"');
				if(commitMessage == ""){ commitMessage = "New commit";}
				if(sessionStarted){
					if ($.trim(updateComment) == ''){ this.value = (this.defaultValue ? this.defaultValue : ''); }
					else{ 
						displaySpinner();
						startCommitProcess();
					}
				}
				$('#modal, #modalQuestion').fadeOut(function() {
					$('#login').val("");
					$('#password').val("");
					$('textarea').hide();
					$('textarea').prev().show();
				});
				$('a[id=cancelBtn]').hide();
				$('a[id=commitBtn]').hide();
				$('a[id=lblDiffCommit]').text("");
				showcomment = false;
				// Re-load all comment
				reloadComment();
	 		}
 		}
		else{ editComment -= 1; }
		$('#chkSignedOff').attr('checked', false);
	});
	
	// Cancel creating branch
	$('#btnCancelBranch').click(function(){
		editComment -= 1;
   	 	$('#modalQuestion').hide();
   	 	$('#fade , #modal').fadeOut(function() { $('#fade, a.close').remove(); });
		return;
   	});

   	// Create new branch and continu
   	$('#btnCreateBranch').click(function(){
   	 	$('#modalQuestion').hide();
   	 	if($('#btnCreateBranch').text() != 'Ok'){
	   	 	// Create the branch
	   	 	createBranch();
	   	 	commitMessage = $('#commitMessage').val().replace(/\r?\n/g, '\\n').replace(/\t/g, '\\t').replace(/\"/g,'\\"');
			if(commitMessage == ""){ commitMessage = "New commit"; }
			if(userB64 != ""){                      
		        if(loginProcess){
					setCookie("logginNitdoc", base64.encode(userName+':'+password+':'+githubRepo+':'+branchName), 1);        
					$('#loginGit').val("");
					$('#passwordGit').val("");
					loginProcess = false;          
					toggleLoginBox();
		        }
		        else{
					if ($.trim(updateComment) == ''){ this.value = (this.defaultValue ? this.defaultValue : ''); }
					else{ startCommitProcess(); }
				} 
		    }
		}
		else
		{
			$('#fade , #modalQuestion, #modal').fadeOut(function() { $('#fade, a.close').remove(); });
		}
   	});

   	$('a[class=newComment]').click(function(){
   	 	addNewComment = true;   	 	
   	 	editComment += 1;
   		// hide comment
		$(this).hide();
		// Show edit box 
		$(this).next().show();
		// Show cancel button
		$(this).next().next().show();
		// Show commit button
		$(this).next().next().next().show();
		// Resize edit box 
		$(this).next().height($(this).next().prop("scrollHeight"));
		resizeTextarea($(this).next());
		// Select it
		$(this).next().select();
		preElement = $(this);  
   	 });

   	$("#dropBranches").change(function () {		
		$("#dropBranches option:selected").each(function () {
			if(branchName != $(this).text()){
				branchName = $(this).text();
			}
		});
		$.when(updateCookie(userName, password, githubRepo, branchName)).done(function(){
			closeAllCommentInEdtiting();
			reloadComment();
		});
	});


	$('#chkSignedOff').click(function(){
		if($(this).is(':checked')){ addSignedOff(); }
		else{ removeSignedOff(); }
	})

	$('a[id=lblDiffCommit]').click(function(){
		showComment($(this));
	});*/
});

function getBaseTree()
{	
    $.ajax({ 
        beforeSend: function (xhr) { 
            if (userB64 != ""){ xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/commits/" + shaLastCommit,
        dataType:"json",
        async: false,
        success: function(success)
        {   
            shaBaseTree = success.tree.sha;
            if (state){ setBlob(); }
            else{ return; }            
        },
        error: function(){
        	return;
        }
    });    
}

function setNewTree()
{
    $.ajax({ 
        beforeSend: function (xhr) { xhr.setRequestHeader ("Authorization", userB64); },
        type: "POST",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/trees", 
        async: false,
        dataType:'json',
        data:'{ "base_tree" : "'+shaBaseTree+'", '+
                '"tree":[{ '+
                    '"path":"'+ pathFile +'",'+
                    '"mode":"100644",'+
                    '"type":"blob",'+
                    '"sha": "'+ shaBlob +'"'+
                '}] '+
            '}',        
        success: function(success)
        { // si l'appel a bien fonctionné
            shaNewTree = success.sha;
            setNewCommit();        	
        },
        error: function(){
        	return;
        }
    });
}

function setNewCommit()
{
    addSignedOff();
    $.ajax({ 
        beforeSend: function (xhr) { xhr.setRequestHeader ("Authorization", userB64); },
        type: "POST",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/commits", 
        async: false,
        dataType:'json',
        data:'{ "message" : "'+ commitMessage +'", '+
                '"parents" :"'+shaLastCommit+'",'+ 
                '"tree": "'+shaNewTree+'"'+
             '}',        
        success: function(success)
        {
            shaNewCommit = success.sha;
            commit();        	
        },
        error: function(){
        	return;
        }
    });
}

//Create a commit
function commit()
{
    $.ajax({ 
        beforeSend: function (xhr) { xhr.setRequestHeader ("Authorization", userB64); },
        type: "POST",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/refs/heads/"+branchName, 
        dataType:'json',
        data:'{ "sha" : "'+shaNewCommit+'", '+
                '"force" :"true"'+
             '}',
        success: function(success) { ui.openModalBox('Commit created successfully'); },
        error:function(error){ ui.openModalBox('Error ' + error.object.message); }
    });
}

// Create a blob
function setBlob()
{
    $.ajax({
        beforeSend: function (xhr) { xhr.setRequestHeader ("Authorization",  userB64); },
        type: "POST",         
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/blobs",         
        async: false,
        dataType:'json',
        data:'{ "content" : "'+text.replace(/\r?\n/g, '\\n').replace(/\t/g, '\\t').replace(/\"/g,'\\"')+'", '+
                '"encoding" :"utf-8"'+
            '}',
        success: function(success)
        {            
            shaBlob = success.sha;
            setNewTree();                  
        },
        error:function(error){ 
        	ui.openModalBox('Error : Problem parsing JSON'); 
        	return;
    	}
    });
}

function displaySpinner(){
	spinner.spin(targetSpinner);
	$("#waitCommit").show();
}

// Check if the repo already exist
function isRepoExisting(){
	$.ajax({
        beforeSend: function (xhr) { 
            if (userB64 != "") { xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET", 
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo, 
        async:false,
        dataType:'json',
        success: function(){ repoExist = true; },
        error: function()
        {
        	ui.openModalBox('Repo not found !');
        	repoExist = false;
        }
    });
}

// Check if the branch already exist
function isBranchExisting(){
	$.ajax({
		beforeSend: function (xhr) {
			if (userB64 != "") { xhr.setRequestHeader ("Authorization", userB64); }
		},
		type: "GET",
		url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/refs/heads/"+branchName,
		async:false,
		dataType:'json',
		success: function(){ branchExist = true; },
		error: function()
		{
			branchExist = false;
			editComment -= 1;
			$('#modal').hide();
			$('#txtQuestion').text("Are you sure you want to create that branch ?");
			$('#btnCancelBranch').show();
			$('#btnCreateBranch').text("Yes");
			$('#modalQuestion').show();
			$('#modalQuestion').show().prepend('<a class="close"><img src="resources/icons/close.png" class="btnCloseQuestion" title="Close" alt="Close" /></a>');
			$('body').append('<div id="fade"></div>');
			$('#fade').css({'filter' : 'alpha(opacity=80)'}).fadeIn();
		}
	});
}

function getMasterSha() 
{
    $.ajax({
        beforeSend: function (xhr) { 
            if (userB64 != ""){ xhr.setRequestHeader ("Authorization", userB64); }
        },
        type: "GET",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/refs/heads/master",
        dataType:"json",
        async: false,
        success: function(success) { shaMaster = success.object.sha; }
    });
}

function createBranch(){

	getMasterSha();

	$.ajax({ 
        beforeSend: function (xhr) { xhr.setRequestHeader ("Authorization", userB64); },
        type: "POST",
        url: "https://api.github.com/repos/"+userName+"/"+githubRepo+"/git/refs", 
        data:'{ "ref" : "refs/heads/'+branchName+'",'+
        		'"sha" : "'+shaMaster+'"'+
            '}',
        success: function(){ return; },
        error: function(){
        	editComment -= 1;
        	ui.openModalBox('Impossible to create the new branch : ' + branchName);
        }
    });
}

$.fn.spin = function(opts) {
  this.each(function() {
    var $this = $(this),
        data = $this.data();

    if (data.spinner) {
      data.spinner.stop();
      delete data.spinner;
    }
    if (opts !== false) {
      data.spinner = new Spinner($.extend({color: $this.css('color')}, opts)).spin(this);
    }
  });
  return this;
};

function closeAllCommentInEdtiting(){
	$('a[id=cancelBtn]').each(function(){
		closeEditing($(this));
 	});
}

function showComment(element){
	// Display the original comment
	if (showcomment == true){		
		showcomment = false;
		element.text("Show original comment");
	}
	else{
		// Show the comment updated in user's repo
		showcomment = true;
		element.text("Comment changed in "+githubRepo+" / "+branchName);
	}
	var parent = element.parent().next(".description");		
	var textarea = parent.children('#fileContent');
	var text = textarea.val();	
	var preSave = parent.children('#preSave');	
	textarea.val(preSave.text());
	preSave.text(text);
	// Resize edit box
	textarea.height(textarea.prop("scrollHeight"));
	resizeTextarea(textarea);
}




/* GitHub API */

function GitHubAPI(login, password, repo) {
	this.login = login;
	this.password = password;
	this.repo = repo;
	this.auth = "Basic " +  base64.encode(login + ':' + password);
	this.currentBranch = "master";

	/* GitHub Account */

	// try to login to github API
	this.tryLogin = function() {
		var res = false;
		$.ajax({
			beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
			},
			type: "GET",
			url: "https://api.github.com/repos/" + this.login+ "/" + this.repo,
			async: false,
			dataType: 'json',
			success: function() {
				res = true;
			}
	    	});
	   	return res;
	}

	this.getUserInfos = function() {
		var res = false;
		$.ajax({
			beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
			},
			type: "GET",
			url: "https://api.github.com/repos/" + this.login+ "/" + this.repo,
		        url: "https://api.github.com/users/" + this.login,
			async: false,
			dataType: 'json',
			success: function(response) {
				res = response;
			}
	    	});
	   	return res;
	}

	this.getSignedOff = function() {
		var infos = this.getUserInfos();
		return infos.name + "&lt;" + infos.email + "&gt;";
	}

	/* GitHub Repos */

	// get branches list
	this.getBranchList = function() {
		var res = new Array();
		$.ajax({
        		beforeSend: function (xhr) { 
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
        		},
        		type: "GET",
        		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/branches",
       			async: false,
        		dataType: 'json',
        		success: function(response) {   
				for(var branch in response) { res[res.length] = response[branch].name }
			}
        	});
		return res;
	}

	this.getFile = function(path, branch){
		var res = false;
		$.ajax({
        		type: "GET",
			url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/contents/" + path,
			data: {
				ref: branch
			},
       			async: false,
        		dataType: 'json',
        		success: function(response) {
				res = response;
			}
        	});
		return res;
	}

	this.getFileContent = function(path, commit){
		var res = false;
		$.ajax({
        		type: "GET",
			url: "https://rawgithub.com/" + this.login + "/" + this.repo + "/" + commit.sha + "/" + path,
       			async: false,
        		dataType: 'text',
        		success: function(response) {
				res = response;
			}
        	});
		return res;
	}

	/* GitHub commits */
	
	/*
	   Creating a new commit take 6 steps:
		1. get the latest commit sha
		2. get the base tree from latest commit
		3. create a new blob with updated file content
		4. post a new tree from base tree and blob
		5. post the new commit with new tree
		6. change branch head
	*/
	this.commit = function(branch, path, content, message) {
		var latestCommit = githubAPI.getLastCommit(branch);
		console.log("Last Commit: " + latestCommit.url);
		var baseTree = githubAPI.getTree(latestCommit.sha);
		console.log("Base Tree: " + baseTree.url);
		var newBlob = githubAPI.createBlob(content);
		console.log("New Blob: " + newBlob.url);
		var newTree = githubAPI.createTree(baseTree, path, newBlob);
		console.log("New Tree: " + newTree.url);
		var newCommit = githubAPI.createCommit(message, latestCommit, newTree);
		console.log("New Commit: " + newCommit.url);
		var result = githubAPI.moveHead(branch, newCommit);
		console.log(result);
	}
	
	// get the latest commit on `branchName`
	this.getLastCommit = function(branchName) {
		var res = false;
		$.ajax({
        		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
        		},
        		type: "GET",
        		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/git/refs/heads/" + branchName,
       			async: false,
        		dataType: 'json',
        		success: function(response) {
				res = response.object;
			}
        	});
		return res;
        }

	// get the base tree for commit
	this.getTree = function(sha) {
		var res = false;
		$.ajax({
        		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
        		},
        		type: "GET",
        		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/git/trees/" + sha,
       			async: false,
        		dataType: 'json',
        		success: function(response) {
				res = response;
			}
        	});
		return res;
        }

	// create a new blob
	this.createBlob = function(content) {
		var res = false;
		$.ajax({
        		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
        		},
        		type: "POST",
        		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/git/blobs",
       			async: false,
        		dataType: 'json',
			data: JSON.stringify({
				content: base64.encode(content),
				encoding: "base64"
			}),
        		success: function(response) {
				res = response;
			}
        	});
		return res;
        }

	// create a new tree from a base tree
	this.createTree = function(baseTree, path, blob) {
		var res = false;
		$.ajax({
        		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
        		},
        		type: "POST",
        		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/git/trees",
			data: JSON.stringify({
				base_tree: baseTree.sha,
				tree: [{
					path: path,
					mode: 100644, // file (blob)
					type: "blob",
					sha: blob.sha
				}]
			}),
       			async: false,
        		dataType: 'json',
        		success: function(response) {
				res = response;
			}
        	});
		return res;		
	}

	// create a new commit
	this.createCommit = function(message, parentCommit, tree) {
		var res = false;
		$.ajax({
        		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
        		},
        		type: "POST",
        		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/git/commits",
			data: JSON.stringify({
				message: message,
				parents: parentCommit.sha,
				tree: tree.sha,
			}),
       			async: false,
        		dataType: 'json',
        		success: function(response) {
				res = response;
			}
        	});
		return res;	
	}

	// move head
	this.moveHead = function(branchName, commit) {
		var res = false;
		$.ajax({
        		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
        		},
        		type: "POST",
        		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/git/refs/heads/" + branchName,
			data: JSON.stringify({
				sha: commit.sha,
				force: true
			}),
       			async: false,
        		dataType: 'json',
        		success: function(response) {
				res = response;
			}
        	});
		return res;	
	}

	this.extractComment = function(content, lstart, lend) {
		var res = new String();
		var lines = content.split("\n");
		for(var i = lstart; i <= lend; i++) {
			var line = lines[i];
			res += line + "\n";
		}
		return res;
	}

	this.getComment = function(branch, location) {
		var parts = location.split(":");
		var path = parts[0];
		var lstart = parts[1].split("--")[0].split(",")[0];
		var lend = parts[1].split("--")[1].split(",")[0];
		var commit = githubAPI.getLastCommit(branch)
		var content = githubAPI.getFileContent(path, commit);
		return githubAPI.extractComment(content, lstart - 2, lend - 2);
	}
}
var githubAPI;

/* GitHub cookie management */

function Cookie() {
	this.cookieName = "nitdoc_github"

	this.setCookie = function (user, password, repo, currentBranch) {
		var value = base64.encode(user + ':' + password + ':' + repo + ':' + currentBranch);
		var exdate = new Date();
		exdate.setDate(exdate.getDate() + 1);
		document.cookie = this.cookieName + "=" + escape(value) + "; expires=" + exdate.toUTCString();
	}

	this.delCookie = function() {
	    document.cookie = this.cookieName + '=; expires=Thu, 01 Jan 1970 00:00:01 GMT;';
	}

	this.getCookie = function() {
		var c_name = this.cookieName;
		var c_value = document.cookie;
		var c_start = c_value.indexOf(" " + c_name + "=");
		if (c_start == -1) { c_start = c_value.indexOf(c_name + "="); }
		if (c_start == -1) {
			c_value = null;
		} else {
			c_start = c_value.indexOf("=", c_start) + 1;
			var c_end = c_value.indexOf(";", c_start);
		  	if (c_end == -1) { c_end = c_value.length; }
			c_value = unescape(c_value.substring(c_start,c_end));
		}
		return c_value;
	}

	this.getCookieInfos = function() {
		var cookie = this.getCookie();
		var res = new Object();
		if (!!cookie) {
			cookie = base64.decode(cookie);
			res.username = cookie.split(':')[0];
			res.password = cookie.split(':')[1];
			res.repo = cookie.split(':')[2];		
			res.currentBranch = cookie.split(':')[3];
		  	return res;
		}
		return false;
	}

	this.setBranch = function(branch) {
		var infos = this.getCookieInfos();
		this.setCookie(infos.username, infos.password, infos.repo, branch);
	}
}

/* GitHub login box */

function LoginBox() {
	// Add login box
	$("nav.main ul").append(
		$("<li id='liGitHub'></li>")
		.append(
			$("<a class='btn' id='logGitHub'><img id='imgGitHub' src='resources/icons/github-icon.png' alt='GitHub'/></a>")
			.click(function() { ui.loginBox.toggle() })
		)
		.append(
			"  <div id='loginBox' style='display: none;'>" +
			"    <div class='arrow'>&nbsp;</div>" +
			"      <h3>Github Sign In</h3>" +
			"        <div id='signedIn' style='display: none'>" +
			"          <label id='logginMessage'>Hello " +
			"            <a id='githubAccount'><strong id='nickName'></strong></a>!" +
			"          </label>" +
			"          <label id='logginBranches' for='dropBranches'>Branch</label>" +
			"          <select class='dropdown' id='dropBranches' name='dropBranches' tabindex='1'></select>" +
			"          <button class='signIn github'><img src='resources/icons/github-icon.png'/>Sign Off</button>" +
			"        </div>" +
			"        <div id='signedOff'>" +
			"	  <form>" +
			"          <label for='loginGit'>Username</label>" +
			"          <input id='loginGit' type='text'/>" +
			"          <label for='passwordGit'>Password</label>" +
			"          <input id='passwordGit' type='password'/>" +
			"          <label for='repositoryGit'>Repository</label>" +
			"          <input id='repositoryGit' type='text'/>" +
			"          <button class='signIn github'><img src='resources/icons/github-icon.png'/>Sign In</button>" +
			"	  </form>" +
			"      </div>" +
			"    </div>" +
			"  </div>"
		)
	);

	// Login with github user or logout current session
	$("#loginBox .signIn").click(function(){
		if($('#signedIn').is(':hidden')){
			if(!$('#loginGit').val() || !$('#passwordGit').val() || !$('#repositoryGit').val()) {
				ui.openModalBox("Please enter your username, password and repository!");
			} else {
				githubAPI = new GitHubAPI($('#loginGit').val(),  $('#passwordGit').val(), $('#repositoryGit').val());
				if(githubAPI.tryLogin()) {
					ui.activate();
				} else {
					githubAPI = false;
					ui.openModalBox('Your login information was incorrect!');
				}
			}
		} else {
			ui.disactivate();
			ui.loginBox.toggle();
		}
		return false;	
	});

	this.toggle = function() {
		if ($('#loginBox').is(':hidden')) {
			$('#loginBox').show();
			if (!$('#loginGit').is(':hidden')) { $('#loginGit').focus(); }
		} else {
			$('#loginBox').hide();
		}
	}	
}

/* Comment edition UI */

function GitHubUI() {
	this.loginBox = new LoginBox();
	this.openedComments = 0;

	this.init = function() {
		$("body").append("<div id='modal'></div>");
		$('body').append('<div id="fade"></div>');
	}

	this.disactivate = function() {
		// close session and purge cookie
		var cookie = new Cookie();
		cookie.delCookie();
		// update login box
	  	$('#signedOff').show();
	  	$('#signedIn').hide();
	  	$("#imgGitHub").attr("src", "resources/icons/github-icon.png");
		$("#liGitHub").removeClass("current");
		$('#loginGit').val("");
	  	$('#passwordGit').val("");
		$('#repositoryGit').val($('#repoName').attr('name'));
	  	$('#branchGit').val('wikidoc');
		// Disactivate edit mode
	   	$('.description pre').each(function() {
			$(this).css("cursor", "inherit")
			$(this).unbind("click");
			if($(this).hasClass("noComment")) {
				$(this).html(" No comment");
			}
		});
		//closeAllCommentInEdtiting();
	}

	this.activate = function() {
		// open session and set cookie
		var cookie = new Cookie();
		cookie.setCookie(githubAPI.login, githubAPI.password, githubAPI.repo, githubAPI.currentBranch);
		// reload loginBox
	  	$('#signedOff').hide();
	  	$('#signedIn').show();
	  	$("#imgGitHub").attr("src", "resources/icons/github-icon-w.png");
		$("#liGitHub").addClass("current");
		// login form values
	  	$('#nickName').text(githubAPI.login);
	  	$('#githubAccount').attr("href", "https://github.com/" + githubAPI.login);
	  	$('#githubRepoDisplay').text(githubAPI.repo);
		var branches = githubAPI.getBranchList();
		$('#dropBranches').empty();
		for(var branch in branches) { 
			var selected = '';
			if(githubAPI.currentBranch == branches[branch]){
				selected = 'selected';
			}
			$('#dropBranches').append('<option '+ selected +'>' + branches[branch] + '</option>');
		}
		$('#dropBranches').change(function()  {
			ui.checkoutBranch($(this).val());
		});
		// load comment from current branch
		this.reloadComments();
		// Activate edit mode
		$("span.noComment").each(function() {
			$(this).html("<a class='noComment'>add comment</a> for ");
		});
	   	$('.description pre, span.noComment a').each(function() {
			$(this).css("cursor", "pointer")
			$(this).click(function() {
				ui.openCommentBox($(this));
			});
		});
	}

	this.openModalBox = function(msg) {
		$('#fade').show();
		$('#modal')
			.empty()
			.append($('<a class="close"><img src="resources/icons/close.png" class="btnClose" title="Close" alt="Close"/></a>').click(function() {ui.closeModalBox()}))
			.append("<h3>" + msg + "</h3><br/>")
			.append(
				$("<div class='buttonArea'>")
				.append($("<button>Ok</button>").click(function() {ui.closeModalBox()}))
			)
			.show()
			.css("top", "50%")
			.css("margin-top", -($('#modal').outerHeight() / 2) + "px")
			.css("left", "50%")
			.css("margin-left", -($('#modal').outerWidth() / 2) + "px");
	}

	this.closeModalBox = function() {
		$('#fade , #modal').hide();	
	}

	this.openCommentBox = function(e) {
		// get text
		var formated = "";
		var len = 3;
		var width = e.outerWidth() - 17;
		if (!e.hasClass("noComment")) {
			var commentLines = e.text().split('\n');
			for (var i = 0; i < commentLines.length; i++) {
				formated += commentLines[i];
				if(i < commentLines.length - 2){ formated += "\n"; }
			}
			len = commentLines.length - 1;
		} else {
			width = e.parent().parent().outerWidth() - 13;
		}
		this.openedComments += 1;

		// create comment box
		var tarea = $("<textarea rows='" + len + "'>" + formated + "</textarea>");
		tarea.css("width", width + "px");
		if (formated != "") {
			tarea.css("height", (e.outerHeight() - 10) + "px");
		}

		var commentBox = $("<div class='commentBox'></div>")
			.append(tarea)
			.append(
				$("<button class='commit'>Commit</a>")
				.click(function() {ui.openCommitBox(e)})
			)
			.append(
				$("<button class='cancel'>Cancel</a>")
				.click(function() {ui.closeCommentBox($(this))})
			);
		if (e.hasClass("noComment")) {
			commentBox.addClass("noComment")
			e.parent().parent().before(commentBox)
			e.parent().hide();
		} else {
			e.after(commentBox);
			e.hide();
		}
	}

	this.closeCommentBox = function(e) {
		this.openedComments -= 1;
		if(e.parent().hasClass("noComment")) {
			e.parent().next().find("span.noComment").show();
		}	
		e.parent().parent().children("pre").show();
		e.parent().remove();
	}

	this.openCommitBox = function(pre) {
		$('#fade').show();
		$('#modal')
			.empty()
			.append($('<a class="close"><img src="resources/icons/close.png" class="btnClose" title="Close" alt="Close"/></a>').click(function() {ui.closeModalBox()}))
			.append("<h3>Commit changes</h3><br/>")
			.append("<label for='message'>Message:</label><br/>")
			.append("<textarea id='message'>Wikidoc: modified comment for " + pre.parent().prev().text() + "</textarea><br/>")
			.append("<input id='signOff' type='checkbox'/>")
				.change(function(e) {
					if ($(e.target).is(':checked')) {
						$("#commitBtn").removeAttr("disabled");
					} else {
						$("#commitBtn").attr("disabled", "disabled");
					}
				})
			.append("<label for='signOff'> Signed-off-by: " + githubAPI.getSignedOff() + "</label>")
			.append(
				$("<div class='buttonArea'>")
				.append($("<button id='commitBtn' disabled='disabled' class='github'><img src='resources/icons/github-icon.png'/>Commit</button>").click(function() {ui.closeModalBox()}))
					.click(function() {ui.commit(pre, $(this).parent())})
			)
			.show()
			.css("top", "50%")
			.css("margin-top", -($('#modal').outerHeight() / 2) + "px")
			.css("left", "50%")
			.css("margin-left", -($('#modal').outerWidth() / 2) + "px");
	}


	this.commit = function(pre,  commitBox) {
		var location = pre.attr("data-comment-location");
		var comment = pre.next().find("textarea").val();
		var path = "/" + location.split(":")[0];
		// get file content from last commit and insert commet
		//var lastCommit = githubAPI.getLastCommit(githubAPI.currentBranch);
		//console.log(lastCommit);
		var fileContent = githubAPI.getFile(path, githubAPI.currentBranch);
		console.log(fileContent);
		var newContent = this.mergeComment(fileContent, comment, location);
		// commit new file
		var message = commitBox.find("#message").val();
		//githubAPI.replaceFile(path, message, newContent, sha, githubAPI.currentBranch);
		githubAPI.commit(githubAPI.currentBranch, "test.toto", newContent, message)
		// reload comments
		// upload location from patches
		/*var numL = preElement.attr("title");
		commentLineStart = numL.split('-')[0] - 1;	
		if(addNewComment) { commentLineStart++; }
		commentLineEnd = (commentLineStart + preElement.text().split('\n').length) - 1;
		state = true;	
		replaceComment(updateComment, currentfileContent);
		getLastCommit();	
		getBaseTree();	
		editComment = false;*/
	}

	this.mergeComment = function(fileContent, comment, location) {
		// get commit location infos
		var parts = location.split(":");
		var lstart = parts[1].split("--")[0].split(",")[0];
		var tabpos = parts[1].split("--")[0].split(",")[1];
		var lend = parts[1].split("--")[1].split(",")[0];
		// replace comment in file content
		var res = new String();
		var lines = fileContent.split("\n");
		// copy lines fron 0 to lstart
		for(var i = 0; i < lstart - 1; i++) {
			res += lines[i] + "\n";
		}
		// set comment
		var commentLines = comment.split("\n");
		for(var i = 0; i < commentLines.length; i++) {
			var line = commentLines[i];
			var tab = tabpos > 1 ? "\t" : "";
			res += tab + "# " + line + "\n";
		}
		// copy lines fron lend to end
		for(var i = lend - 1; i < lines.length; i++) {
			res += lines[i] + "\n";
		}
		return res;
	}

	this.checkoutBranch = function(branch) {
		githubAPI.currentBranch = branch;
		var cookie = new Cookie();
		cookie.setBranch(branch);
	}

	this.reloadComments = function() {
		var path = "new.nit";
		var message = "Nouveau1";
		var content = "new content\n";
		var branch = "mmnitdoc"
		//githubAPI.commit(branch, path, content, message);

		// check current branch
		// get list of comment to refresh
		// get last commit from current branch
		// load comments
		// display

		//var file = githubAPI.getFile(path, branch);
		//var sha = file.sha;
		//var res = false;
		//$.ajax({
        		/*beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
        		},
        		type: "PUT",
        		url: "https://api.github.com/repos/" + githubAPI.login + "/" + githubAPI.repo + "/contents/" + path,
			data: JSON.stringify({
				path: path,
				message: message,
				content: base64.encode(content),
				sha: sha,
				branch: branch
			}),
       			async: false,
        		dataType: 'json',
        		success: function(response) {
				console.log("Success: ");
				console.log(response);
			},
			error: function(response) {
				console.log("Error: ");
				console.log(response);
			}
        	});*/
	}

}
var ui;

function reloadComment(){
	var path = $('pre[class=text_label]').attr('tag');
	$.when(getCommentLastCommit(path, false)).done(function(){
		if(sessionStarted){ getCommentLastCommit(path, true); }
		$('pre[class=text_label]').each(function(){ getCommentOfFunction($(this)); });
	});
}
