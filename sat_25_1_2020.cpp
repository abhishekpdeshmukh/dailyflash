//Date-:25/1/2020

//1]
/*
Program 1: Write a Program to print series of odd numbers
ranging between two numbers entered by user.
Input:
Min of Series:4
Max of Series:60
Output: Series Of Odd Numbers Ranging between 4 & 60 is:
5, 7, 9, . . ., 59

*/

/*
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int min,max;
	cout<<"Enter the min range\n";
	cin>>min;
	cout<<"enter the max range\n";
	cin>>max;
	for(int i=min;i<max;i++){
		if(i%2!=0){
			cout<<i<<",";
		}
	}
	cout<<"\n";
	return 0;
}
*/

//-------------------------------------------------------------------------------------------------------------



//2]

// Program 2: Write a Program which accepts two integers from user
// and swaps their insertion order.
// Input : 20 30 Output :
// Before Swap : 20 30
// After Swap : 30 20

/*
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int num1,num2,temp;
	cout<<"Enter the num1\n";
	cin>>num1;
	cout<<"Enter the num2\n";
	cin>>num2;
	cout<<"Before swap:"<<num1<<" "<<num2<<"\n";
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"After swap:"<<num1<<" "<<num2;
	cout<<"\n";
	return 0;
}
*/


//-------------------------------------------------------------------------------------------------------------



//3]


// Program 3: Write a Program to print Cubes
// and Squares of all Even numbers ranges between given input number.
// Input: 10
// Output:
// Cube of 2 : 8 and Square of 2 : 4 Cube of 4 : 64 and Square of 4 : 16 . .
// Cube of 10 : 1000 and Square of 10 : 100


/*
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the range number\n";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			cout<<"Cube of "<<i<<" : "<<i*i*i<<" and Square of "<<i<<" :"<<i*i<<"\n";
		}
	}
	cout<<"\n";
	return 0;
}

*/

//-------------------------------------------------------------------------------------------------------------

//4]

// Program 4: Write a Program to Print following Pattern.
// a
// A A
// a a a
// A A A A 
// a a a a a 

/*
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	char flag;
	cout<<"Enter a number\n";
	cin>>n;
	for(int i=0;i<n;i++){
		if(i%2==0){
			flag='a';
		}
		else{
			flag='A';
		}
		for(int j=0;j<i+1;j++){
			cout<<flag<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	return 0;
}

*/

//-------------------------------------------------------------------------------------------------------------


//5]


// Program 5: Write a Program that accepts Two integers from user
// and prints maximum number from them.
// Input: 56 99 Output: The Maximum number amongst 56 & 99 is 99


/*
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int num1,num2,temp;
	cout<<"Enter the num1\n";
	cin>>num1;
	cout<<"Enter the num2\n";
	cin>>num2;
	if(num1>num2){
		cout<<"The Maximum number amongst "<<num1<<" & "<<num2<<" is "<<num1;
	}
	else{
		cout<<"The Maximum number amongst "<<num1<<" & "<<num2<<" is "<<num2;
	}
	cout<<"\n";
	return 0;
}

*/

//-------------------------------------------------------------------------------------------------------------
