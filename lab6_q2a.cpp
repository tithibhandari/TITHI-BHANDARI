//Define library
#include<iostream>
using namespace std;

/*To write a programme with a function that takes two parameters find the maximum & rertuns the maximum*/

int func1 (int a,int b) { /*typename(parameter1,parameter2)*/
 int max;
 
	if (a > b ){ 
		return a; 
	}
   else {
   return b ;
    }       
 return max ; //return the maximum
  }  
  
int main()              //Ask the user for two numbers 
{
	int a,b ,y ;
	cout <<"enter the two numbers";
	cin >> a >> b; 
	y = func1(a,b); //call the function 1 in the main function
	cout << y ;
return 0;
}
