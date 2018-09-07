/*TO PRINT THE HOLLOW TRIANGLE STAR PATTERN
*
**
* *
*  *
***** */
//define the library
#include<iostream>
using namespace std;
int main() {
 int n=5;
  int i,j;

//PRINT STARS AND SOME SPACES 
 
for (i=0;i<n; i++)
      {  
        if (i==0 || i==1 || i==(n-1))
            { for (j=0;j<(i+1) ;j++)
               {cout<<"*";}
            cout<<endl;
            }
//for rest print star space then star

else  
{ for (j=0;j<n;j++) 
      {if (j==0||j==i) 
         cout<<"*";
else 
       cout<<" "; 
       }
  cout<<endl;
}
return 0; 
}

 


  
          
 

