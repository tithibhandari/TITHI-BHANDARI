//PRINT HOLLOW SQUARE RECTANGLE
//define libray
#include<iostream>
using namespace std;
int main()
{
int n=5;
//print stars and spaces  
for(int i=0;i<n;i++)
     {
    //print stars and no spaces for first and last rows
if (i==0 ||i==n-1)
              {for (int j=0;j<n;j++){
                 cout<<"*";
               }  
                  cout<<endl;
               }         
//for rest print star space star
else 
 {for (int j=0;j < n;j++)
  {if (j==0||j==n-1)
cout<<"*";
else 
  cout<<" ";
  }
cout<<endl;

    }                }
return 0;
}
