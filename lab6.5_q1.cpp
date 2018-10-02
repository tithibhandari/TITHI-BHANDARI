//apples cost Re 1,bananas Re0.5,mangoes of Re 3.You bought 100 fruits of Re 100.how many fruits you bought?

 // define library
#include<iostream>

using namespace std;

//define the mein function

int main()
  {

//definie the variables
int a,m,b;
//the numbers of mangoes that i have bought
  cout << "PLease enter the value of m"  ;
cin  >>  m;
//loops
  while ( m <= 19 and m >= 1 ){
          a = (100-5*m) ;
           b = (4*m)  ;

cout << "the numbers of bananas b " << b << endl;
cout << "the numbers of apples a "<< a << endl;
break ;
        }
return 0;   
  }
