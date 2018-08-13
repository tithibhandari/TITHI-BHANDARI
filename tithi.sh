#!/bin/bash
echo "What is your NAME"
read NAME
echo "your name is $NAME"
mkdir $NAME
cd $NAME
touch $NAME.cpp
