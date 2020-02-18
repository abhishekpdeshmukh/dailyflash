#include <iostream>
#include<math.h>
using namespace std;
// Program 1: Write a Program to print an Arithmetic Progression (A.P.) series. Take Starting element, Total count of elements in A.P. & the Common Difference from user.
// {Note: an AP (i.e. Arithmetic Progression is such series which has common difference between every consecutive elements, AP of common difference 2 starting from 20 can be: 20, 22, 24, 26 . . .} Input:
// Starting Element: 1 Number of Elements: 5 Common Difference: 6
// Output: The AP is: 1 7 13 19 25

// int main(int argc, char const *argv[])
// {
// 	int start,num,cd;
// 	cin>>start>>num>>cd;
// 	cout<<"Output: The AP is: ";
// 	for(int i=1;i<=num;i++){
// 		cout<<start+(i-1)*cd<<" ";
// 	}
// 	cout<<"\n";
// 	return 0;
// }


//---------------------------------------------------------------------------

// Program 2: Write a Program that sums up all the digits from an entered number
// and finds average of that sum and print them both.
// Input: 12345
// Output:Sum of Digits from 12345: 15 Average of sum of digits from 12345: 3

// int main(int argc, char const *argv[])
// {
// 	int n,sum=0,count=0;
// 	cin>>n;
// 	int m=n;
// 	while(n>0){
// 		sum+=n%10;
// 		count++;
// 		n=n/10;
// 	}
// 	cout<<"Sum of Digits from "<<m<<" : "<<sum<<" Average of sum of digits from "<<m<<" :"<<sum/count;
// 	return 0;
// }


//---------------------------------------------------------------------------

// Program 3: Write a Program to find circumference of a Circle of radius entered by user.
// {Note: The formula to determine Circumference of Circle is 2πr. Where π = 3.142}
// Input: radius of Circle 40
// Output: The Circumference of Circle with Radius 40 is 251.36


// int main(int argc, char const *argv[])
// {
// 	int r;
// 	cin>>r;
// 	cout<<2*3.142*r<<"\n";
// 	return 0;
// }

//---------------------------------------------------------------------------

// Program 4: Write a Program to Print following Pattern.
// 0 1 4 9 16
//   2 6 12 20
//     8 15 24
//       18 28
//       	32
// int main(int argc, char const *argv[])
// {
// 	int n;
// 	cin>>n;
// 	int sum[n];
// 	for(int i=0;i<n;i++){
// 		cout<<i*i<<" ";
// 		sum[i]=i*i;
// 	}
// 	cout<<"\n";
// 	for(int i=1;i<n;i++){
// 		for(int j=0;j<i;j++){
// 			cout<<"  ";
// 		}
// 		for(int k=i;k<n;k++){
// 			cout<<sum[k]+k<<" ";
// 			sum[k]+=k;
// 		}
// 		cout<<"\n";
// 	}
// 	return 0;
// }

//---------------------------------------------------------------------------

// Program 5: Write a Program that takes a number as input from user and
// prints only those digits from that number,
// which are perfect divisors of the actual number.
// Input: 124
// Output: The Perfect Divisor Digits from the Number 124 are 1 2 4

// bool is_divisor(int x,int n){
// 	return n%x==0;
// }
// int main(int argc, char const *argv[])
// {
// 	int n,m;
// 	cin>>n;
// 	m=n;
// 	cout<<"The Perfect Divisor Digits from the Number "<<m<<" are ";
// 	while(n>0){
// 		if(is_divisor(n%10,m)){
// 			cout<<n%10<<" ";
// 		}
// 		n=n/10;
// 	}
// 	return 0;
// }

//---------------------------------------------------------------------------
