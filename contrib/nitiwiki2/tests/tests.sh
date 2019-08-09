#!/bin/bash

# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexandre Terrasa <alexandre@moz-code.org>.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

test_wiki()
{
	wiki_root=$1
	wiki_name=`basename $wiki_root`
	wiki_exp="$RES/$wiki_name"
	wiki_out="$OUT/$wiki_name"
	wiki_res="$wiki_out/$wiki_name.out"
	wiki_diff="$wiki_out/$wiki_name.diff"
	wiki_config="$wiki_root/config.ini"

	((ALL++))
	echo -en "`bold "[  ]"` $wiki_name..."
	mkdir -p $wiki_out

	# Skip if the wiki is not found
	if [[ ! -f $wiki_config ]]; then
		((SK++))
		echo -e " SKIPPED (\`$wiki_config\` not found)"
		return 1;
	fi

	# Skip if the saved expected result is not found
	if [[ ! -d $wiki_exp ]]; then
		((SK++))
		echo -e " SKIPPED (\`$wiki_exp\` not found)"
		return 1;
	fi

	# Test `nitiwiki` execution
	$NITIWIKI --root "$wiki_root" --out "$wiki_out" > "$wiki_res" 2>&1
	if [ $? -ne 0 ]; then
		((KO++))
		echo -e "\r`bold $(red "[KO]")` $wiki_name (cmd returned $res, see $wiki_res)"
		return 2;
	fi

	# Test diff between output and expected result
	diff -r "$wiki_out" "$wiki_exp" > "$wiki_diff" 2>&1
	if [ $? -ne 0 ]; then
		((KO++))
		echo -e "\r`bold $(red "[KO]")` $wiki_name (diff $wiki_out $wiki_exp)"
		return 3;
	fi

	((OK++))
	echo -e "\r`bold $(green "[KO]")` $wiki_name\t"
	return 0;
}

bold() {
	echo -ne "\033[1m$1\033[21m"
}

red() {
	echo -ne "\033[91m$1\033[m"
}

green() {
	echo -ne "\033[92m$1\033[m"
}

NITIWIKI="../bin/nitiwiki"
OUT=./out
RES=./res

ALL=0
OK=0
KO=0
SK=0

rm -rf $OUT
mkdir -p $OUT

# Check if the `nitiwiki` binary exists
if [[ ! -x "$NITIWIKI" ]]; then
	echo -e "`red $(bold "Error")`: $NITIWIKI not found.\n"
	echo -e "Did you forget to \``bold make`\`?"
	exit 1
fi

wikis=""
if [ "$#" -eq 0 ]; then
	# If we have no argument, run all wikis
	wikis=`ls -d wikis/*/`
else
	# Else run only passed wikis
	wikis=$@
fi

for wiki_root in $wikis; do
	test_wiki $wiki_root
done

test "$OK" == "$ALL"

if $?; then
	echo -en "\n\033[1m\033[92m[SUCCESS]\033[m\033[21m"
else
	echo -en "\n\033[1m\033[91m[FAILURE]\033[m\033[21m"
fi
echo -e " $OK/$ALL passed, $KO failed, $SK skipped"

exit $res
