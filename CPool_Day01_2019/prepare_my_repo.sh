#!/bin/bash

if [ -z "$1" ]
then
    exit;
else  
    blih -u vincent.douroux@epitech.eu repository create $1
    blih -u vincent.douroux@epitech.eu repository setacl $1 ramassage-tek r
    blih -u vincent.douroux@epitech.eu repository getacl $1
fi
