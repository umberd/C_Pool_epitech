#!/bin/bash

cut -d: -f 1 | sed -n 0~2p | rev | sort -r | sed -n ${MY_LINE1},${MY_LINE2}p | tr '\n' ',' | sed 's/\,/\, /g' | sed 's/\, $/.\n/'
