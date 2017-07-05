#!/bin/bash

while True 
do
	echo "Calibrating Mouse..."
	echo "86% done, 2.1 hours left..."
	echo " "
	./fdf m:2500,1400
	./fdf m:2450,1350
	read -t 1 -rsn 1 input && pmset displaysleepnow
done
