#!/usr/bin/bash

i=0
j=0

while [[ j -eq 0 ]]; do
	./script.sh >> output 2>> output
	j=$?
	i=$((i+1))
done

cat output
rm $_
echo $i

