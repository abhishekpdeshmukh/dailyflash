#include <iostream>
#include <math.h>
using namespace std;


// Program 1: Write a Program that prints Sum an Arithmetic Progression (A.P.) series. 
// Take Starting element, Total count of elements in A.P. &
// the Common Difference from user.
// Input:
// Starting Element: 1 Number of Elements: 8 Common Difference: 5
// Output: The AP is: 1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148


// int main(int argc, char const *argv[])
// {
// 	int start,total_n,cd;
// 	cin>>start>>total_n>>cd;
// 	cout<<(total_n/2)*(2*start+(total_n-1)*cd);

// 	return 0;
// }

//-----------------------------------------------------------------------------

// Program 2: Write a Program that prints
// Binary of Each Digit from entered Number.
// Input: 12
// Output: Binary of 1: 0001
// Binary of 2: 0010

// void print_binary(int n){
// 	int m=n;
// 	string output="";
// 	while(n>0){
// 		if(n%2==0){
// 			output='0'+output;
// 		}
// 		else{
// 			output='1'+output;
// 		}
// 		n=floor(n/2);
// 	}
// 	cout<<"Binary of "<<m<<": "<<output<<"\n";
// }
// int main(int argc, char const *argv[])
// {
// 	int n;
// 	cin>>n;
// 	while(n>0){

// 		print_binary(n%10);
// 		n=n/10;
// 	}
// 	return 0;
// }


//-----------------------------------------------------------------------------

// Program 3: Write a Program to find radius of a circle if user
// provides circumference of that same circle.
// Input: Circumference of circle: 251.36 Output: The Radius of the circle is: 40

// int main(int argc, char const *argv[])
// {
// 	int c;
// 	cin>>c;
// 	cout<<"The Radius of the circle is: "<<c/(2*3.1415);
// 	return 0;
// }


//-----------------------------------------------------------------------------

// Program 4: Write a Program to Print following Pattern


// E a D b
//   c C d 
//     B e 
//       f

// int main(int argc, char const *argv[])
//   {
//   	char c1=69,c2=97;
//   	int flag=0;
//   	for(int i=0;i<4;i++){
//   		for(int j=0;j<i;j++){
//   			cout<<" ";
//   		}
//   		for(int k=0;k<4-i;k++){
//   			if(flag==0){
//   				cout<<c1;
//   				c1--;
//   				flag=1;
//   			}
//   			else{
//   				cout<<c2;
//   				c2++;
//   				flag=0;
//   			}
//   		}
//   		if((i+1)%2!=0){flag=1;}
//   		cout<<"\n";
//   	}
//   	return 0;
//   }  


//-----------------------------------------------------------------------------


// Program 5: Write a Program that takes a number as input from user
// and prints Quotient of division of each digit from that number with
// the number itself. Input: 124 Output:
// The Quotients of Divisions are; 124/1 = 124 124/ 2 = 62 124/4 = 31


// int main(int argc, char const *argv[])
// {
// 	int n,m;
// 	cin>>n;
// 	m=n;
// 	cout<<"The Quotients of Divisions are \n";
// 	while(n>0){
// 		cout<<m<<"/"<<n%10<<" = "<<m/(n%10)<<"\n";
// 		n=n/10;
// 	}
// 	return 0;
// }



//-----------------------------------------------------------------------------
