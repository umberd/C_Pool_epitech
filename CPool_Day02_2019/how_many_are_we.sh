#!/bin/sh

if [ -z $1 ]
then
    wc -l
else
    cut -d ";" -f3 | grep ${1^^} | wc -l
fi
