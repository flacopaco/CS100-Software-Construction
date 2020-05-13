#!/bin/sh
if [ $# -eq 3 ]; then
    largest=$1
    if [ $2 -gt $1 ]; then
        largest=$2
    fi
    if [ $3 -gt $largest ]; then
        largest=$3
    fi
    echo $largest
else 
    echo "not enough parameters"
fi

    

