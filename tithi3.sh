#!bin/bash
echo "What is your name"
read NAME
echo "you are $NAME"
mkdir $NAME
cd $NAME
for i in 1 2 3 4 5
do
  echo "$i"
touch $NAME$i.cpp
done


