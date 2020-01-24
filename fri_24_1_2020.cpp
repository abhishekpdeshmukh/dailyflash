//Date-:24/1/2020


//1]
// Program 1: Write a Program to print all the numbers ranging between 1 to 100
// that are divisible by 3 or 5.
// Output: 3 5 6 9 10 . . .. 99 100.
/*
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	for(int i=1;i<=100;i++){
		if(i%3==0||i%5==0){
			cout<<i<<" ";
		}
	}
	cout<<"\n";
	return 0;
}*/



//-------------------------------------------------------------------------------------------------------------

//2]
// Program 2: Write a Program to all the numbers ranging between 1 to 100 that are divisible by 4 and 7.
// Output: 28 56 84

/*
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	for(int i=1;i<=100;i++){
		if(i%4==0&&i%7==0){
			cout<<i<<" ";
		}
	}
	cout<<"\n";
	return 0;
}*/


//-------------------------------------------------------------------------------------------------------------

//3]
// Program 3: Write a Program to print Cubes and Squares of all Odd numbers ranges between
// given input number.
// Input: 10 Output:
// Cube of 1 : 1 and Square of 1 :1 Cube of 3 : 27 and Square of 3 :9 . .
// Cube of 9 : 729 and Square of 9 : 81



/*
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the range number\n";
	cin>>n;
	for(int i=1;i<n;i++){
		if(i%2!=0){
			cout<<"Cube of "<<i<<" : "<<i*i*i<<" and Square of "<<i<<" :"<<i*i<<"\n";
		}
	}
	cout<<"\n";
	return 0;
}*/

//-------------------------------------------------------------------------------------------------------------

//4]

// Program 4: Write a Program to Print following Pattern.

// 0
// 1 1
// 0 0 0
// 1 1 1 1
// 0 0 0 0 0


/*
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,flag;
	cout<<"Enter a number\n";
	cin>>n;
	for(int i=0;i<n;i++){
		if(i%2==0){
			flag=0;
		}
		else{
			flag=1;
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

// Program 5: Write a Program that accepts an integer from user and
// prints all of its perfect divisors.
// Input: 24 Output: Perfect Divisors of 24 are: 2 3 4 6 8 12

/*
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number\n";
	cin>>n;
	cout<<"Perfect Divisors of "<<n<<" are: ";
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<i<<" ";
		}
	}
	cout<<"\n";
	return 0;
}/*




//-------------------------------------------------------------------------------------------------------------
