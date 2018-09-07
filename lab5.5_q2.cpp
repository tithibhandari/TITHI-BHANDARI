//PRINT RIGHT TRIANGKE STAR PATTERN
//define library
/*

*****
*   *
*   *
*   *
*****


*/








#include<iostream>
using namespace std;
int main(){
	int n = 10;
	for (int i = 0; i < n ; i++){
		// print stars 0 spaces 0 stars  
		// print all stars when 1st row and last row
		if ( i == 0 or i == (n-1)){// when 1st row and last row
			for (int i = 0; i < n ; i++){
				cout << "*";
			}
		}
		// rest print  stars spaces stars
		else{
			// print star
			cout << "*";
			// print n-2 spaces
			for (int i = 0; i < (n-2) ; i++){
				cout << " ";
			}
			// print star
			cout << "*";
		}
		cout << endl;
		
		
	}
// print stars spaces stars
		// print stars spaces stars
		// print stars 0 psaces 0 stars
}	
