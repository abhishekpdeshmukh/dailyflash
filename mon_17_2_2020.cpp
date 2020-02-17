// Program 1: Write a Program to print sum of following series. Take the limiting factor from user and print sum up to that element. 
// Series: 1, 11, 111, 1111, 11111, 111111, 111111 . . .  
// Input: 5 
// Output: The Sum is: 12345


// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int powfactor=0,num=0,sum=0,n;
// 	cin>>n;
// 	for(int i=0;i<n;i++){
	
// 		num+=pow(10,powfactor);
//         sum+=num;    
// 		powfactor++;
// 	}
// 	cout<<sum;
// 	return 0;
// }


//------------------------------------------------------------------------------------


// Program 2: Write a Program to display a number in reverse order. 
// Input: 123456 
// Output: 654321 


// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int n;
// 	char c;
// 	cin>>n;
// 	while(n>0){
// 		cout<<(n%10);
// 		n=n/10;
// 	}
// 	cout<<"\n";
// 	return 0;
// }


//------------------------------------------------------------------------------------


// Program 3: Write a Program to that accepts a number from user print multiplication of all
// Even Digits from that number.
// Input: 1234 Output: The Multiplication of all Even Digits is 8 
 
 
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int  prod=1,n;
// 	cin>>n;
// 	while(n>0){
// 		if(n%10%2==0){
// 			prod*=n%10;
// 		}
// 		n=n/10;
// 	}
// 	cout<<prod<<"\n";
// 	return 0;
// }


//------------------------------------------------------------------------------------

/*
Program 4: Write a Program to Print following Pattern


5 4 3 2 1
  4 3 2 1 
    3 2 1 
      2 1 
        1*/

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;i++){
// 		for(int k=n;k>n-i-1;k--){
// 			cout<<" ";
// 		}
// 		for(int j=n-i;j>0;j--){
// 			cout<<j;
// 		}
// 		cout<<"\n";
// 	}
// 	return 0;
// }

//------------------------------------------------------------------------------------

// Program 5: Write a Program that takes a number as input from user and
// prints only those digits from that number, which are prime in nature.
// Input: 141 Output: The Prime Digits from the Number 141 is 1, 1. 

// bool is_prime(int n){
// 	for(int i=2;i<n/2+1;i++){
// 		if(n%i==0){
// 			return false;
// 		}
// 	}
// 	return true;
// }
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int n;
// 	cin>>n;
// 	cout<<"The Prime Digits from the Number "<<n<<" is ";
// 	while(n>0){
// 		if(is_prime(n%10)){
// 			cout<<n%10<<" ";
// 		}
// 		n=n/10;
// 	}
// 	return 0;
// }


//------------------------------------------------------------------------------------
