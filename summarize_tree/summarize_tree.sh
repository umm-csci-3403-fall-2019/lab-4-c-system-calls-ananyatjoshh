#!/bin/bash

path=$1

num_dirs=$(find $path -type d | wc -l | xargs)
num_regular=$(find $path -type f | wc -l | xargs)

echo "There were "$num_dirs "directories."
echo "There were "$num_regular " regular files."
