//define library
#include<iostream>
using namespace std;

/*A programme with a void function that takes two int parameters add them &   return the sum by reference*/

void func2 (int a,int b, int &c)   //type name(parameter1,parameter 2)
            { c = a+b ; }            //body of the function
/*Ask the user for two numbers and takes a third*/
int main ()
 { int a,b,total;
cout <<"enter the two numbers";
cin >> a >> b;
func2 (a,b,total); //f(x)
cout << total;
return 0;
}

             

