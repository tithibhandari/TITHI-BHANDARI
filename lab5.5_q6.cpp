/*TO PRINT FULL PYRAMID
  
     *
    ***
   *****
  *******
 ********* */ 
//define library

#include<iostream>
using namespace std;

int main()
 { int n=5;
    int i,j;
//print space star then space
//first print the spaces on LHS
for  (i=0;i<n;i++){
      (for j=0;j<(n-1);j++)
        {cout<<" "; }
        
      
//print the stars in the pyramids

for (j=0;j< (2*i+1);j++)
    {cout<<"*";}

//for printing the  space

for (j=0 ;j<n-1;j++)

     {cout<<" ";} 

  cout<<endl;
  }
 return 0;
}    


