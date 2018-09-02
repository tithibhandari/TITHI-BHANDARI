//define library
#include<iostream>
using namespace std;

 
//define a main function
int main(){

//define variables
int n, a=0;

cout<<"please enter a numeric value"<<endl;
cin>>n;

int i=1;

//loop
while(i<=n);
{
if (i%2==0)//condition for even number
a=a+i;
i++;
}
cout<<"the sum of all even numbers from 1 is "<<endl;
return 0;
}
