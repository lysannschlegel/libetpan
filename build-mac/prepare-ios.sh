#!/bin/sh
cd dependencies
for script in prepare-*-ios.sh ; do
	echo running $script
	sh "$script"
done
