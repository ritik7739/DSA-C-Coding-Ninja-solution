#include<iostream>
using namespace std;
//Number of zeros in N
int Numberofzero(int n){
	if(n==0){
		return 0;
	}
	if(n%10==0){
		return Numberofzero(n/10)+1;
	}
	else{
		return Numberofzero(n/10);
	}
}
int main(){
	int n;
	cout<<"Enter the number we have to check Number of zeros :";
	cin>>n;
	cout<<"Number of zeros in Number : "<<Numberofzero(n)<<endl;
}
