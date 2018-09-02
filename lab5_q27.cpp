//define a library

#include<iostream>
using namespace std;

int main(){

//sum of natural numbers from 1 to n

int n, sum = 0;

cout<<"enter a positive integer n"<<endl;
cin>>n;
//loop

 int i=1;
while (i<=n){

sum=sum+i;
i++;
}
cout<<"sum of first n natural numbers is"<<endl;
return 0;
}

