#!/bin/bash

path=$1

num_dirs=$(find $path -type d | wc -l)
echo "There are "$num_dirs "directories."

num_regular=$(find $path -type f | wc -l)
echo "There are "$num_regular "files."

