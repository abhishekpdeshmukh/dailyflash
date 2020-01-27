//Date-:27/1/2020

//1]
// Program 1: Write a Program to print series of Even numbers ranging between
// two numbers entered by user. 
// Input:  
// Min of Series : 4 
//   Max of Series: 60 
// Output: Series Of Even Numbers Ranging between 4 & 60 is: 
//  4, 6, 8, . . ., 60 


// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int num1,num2;
// 	cin>>num1>>num2;
// 	for(int i=num1;i<=num2;i++){
// 		if(i%2==0){
// 			cout<<i<<" ";
// 		}
// 	}
// 	cout<<"\n";
// 	return 0;
// }



//----------------------------------------------------------------------------------

//2]

// Program 2: Write a Program that accepts Two integers from user
// and prints minimum number from them. 
// Input: 56  99 
// Output: The Minimum number amongst 56 & 99 is 56 



// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int num1,num2;
// 	cin>>num1>>num2;
// 	if(num1>num2)cout<<num1;
// 	else cout<<num2;
// 	cout<<"\n";
// 	return 0;
// }



//-------------------------------------------------------------------------

//3]


// Program 3: Write a Program to calculate Velocity of particle in the space
// having Distance & Time Entered By User. 
// Input:  
//  Distance: 100m 
//  Time:  20sec 
// Output: The Velocity of a Particle roaming In space is 5m/s. 


// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int dist,time;
// 	cin>>dist>>time;
// 	cout<<"The Velocity of a Particle roaming In space is "<<dist/time<<" m/s";
// 	cout<<"\n";
// 	return 0;
// }




//-----------------------------------------------------------------------------


//4]

// Program 4: Write a Program to Print following Pattern. 

// 1
// 4  9
// 16 25 36
// 49 64 81 100	

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int n,k=1;
// 	cin>>n;
// 	for(int i=1;i<=n;i++){
// 		for(int j=k;j<k+i;j++){
// 			cout<<(j)*(j)<<" ";
// 		}
// 		k+=i;
// 		cout<<"\n";
// 	}
// 	cout<<"\n";
// 	return 0;
// }


//------------------------------------------------------------------------------

//5]


// Program 5: Write a Program that accepts Three integers from user and
// prints maximum number from them. 
// Input: 56 7  99 
// Output: The Maximum number amongst 56 7 & 99 is 99 



// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int num1,num2,num3;
// 	cin>>num1>>num2>>num3;
// 	cout<<max(max(num1,num2),num3);
// 	cout<<"\n";
// 	return 0;
// }


//-------------------------------------------------------------------------