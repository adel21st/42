#!/bin/sh
cat /etc/passwd | grep -v '^#' | awk 'NR%2==0' | cut -d':' -f1 | rev | sort -r | head -n 16 | tail -n 14 | tr '
' ',' | sed 's/,$/\./' | sed 's/,/, /g' | tr -d '
' 
