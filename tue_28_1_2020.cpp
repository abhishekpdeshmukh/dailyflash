//DATE:- 28/01/2020
// Program 1: Write a Program which detects whether the entered number is
// perfect or not .
// {Note: If sum of perfect divisors of number is equal to the entered number
// than it is considered as perfect one.}
// Input : 6
// Output : 6 is a Perfect number.

// #include <iostream>
// using namespace std;
// int main(void){

// 	int n,divsum=0;
// 	cin>>n;
// 	for(int i=1;i<n;i++){
// 		if(n%i==0){
// 			divsum+=i;
// 		}
// 	}
// 	if(divsum==n){
// 		cout<<n<<" is a Perfect number.";
// 	}
// 	else{
// 		cout<<n<<" is not a Perfect number.";	
// 	}
// 	return 0;
// }

//---------------------------------------------------------------------------------


// Program 2: Write a Program that accepts Two integers from user and prints the
// series of factorial of all numbers between those two inputs.
// Input: 1 to 5
// Output:
// Factorial of 1 = 1
// .
// .
// Factorial of 5 = 120

// #include <iostream>
// using namespace std;
// int fact(int n){
// 	if(n<2){
// 		return n;
// 	}
// 	else{
// 		return n*fact(n-1);
// 	}
// }
// int main(int argc, char const *argv[])
// {
// 	int num1,num2;
// 	cin>>num1>>num2;
// 	for(int i=num1;i<=num2;i++){
// 		cout<<"Factorial of "<<i<<" = "<<fact(i)<<"\n";	
// 	}
// 	return 0;
// }

//---------------------------------------------------------------------------------

// Program 3: Write a Program to Implement Ohms Law.
// {Note: V = I*R, where, v is voltage, I is current & R is resistance}
// Input:
// I = 10 amp
// R = 5
// Output: Voltage V = 50.

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int i,r;
// 	cin>>i>>r;
// 	cout<<"Voltage V = "<<i*r;
// 	return 0;
// }


//---------------------------------------------------------------------------------


// Program 4: Write a Program to Print following Pattern.
//  1
// 8 27
// 64 125 216
// 343 512 729 1000

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int n,k=1;
// 	cin>>n;
// 	for(int i=1;i<=n;i++){
// 		for(int j=k;j<k+i;j++){
// 			cout<<(j)*(j)*(j)<<" ";
// 		}
// 		k+=i;
// 		cout<<"\n";
// 	}
// 	cout<<"\n";
// 	return 0;
// }


//---------------------------------------------------------------------------------


// Program 5: Write a Program that accepts Three integers from user and prints
// minimum number from them.
// Input: 56 7 99
// Output: The Minimum number amongst 56 7 & 99 is 7


// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int num1,num2,num3;
// 	cin>>num1>>num2>>num3;
// 	cout<<min(min(num1,num2),num3);
// 	cout<<"\n";
// 	return 0;
// }


//---------------------------------------------------------------------------------
