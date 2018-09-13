//Define library

#include<iostream>
using namespace std;

/*Write a programme that takes two int parameters,add them
& returns the sum*/
int sum;
 int func1(int a,int b) //typename(parameter1,parameter2)
      { sum=a+b;       
        return sum;    //body of the function 
         }
/*the programme should ask the user for the two numbers and tell user the sum*/ 
int main()
 { int a,b,y ;
   
   cout <<"enter two numbers a and b";
     cin >> a >> b; 
        y = func1(a,b);  //calling the function 1 in main function
                       //sum value get stored in y
        cout <<  y ;
    return 0;
  } 

             
