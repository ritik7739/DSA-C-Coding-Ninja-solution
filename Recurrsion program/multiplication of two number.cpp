#include<iostream>
using namespace std;
int multiplication(int m,int n){
	//Base case
	if(n==0){
		return 0;
	}
	//recursive call
	int a=multiplication(m,n-1);
	return a+m;
}
int main(){
	int m,n;
	cout<<"Enter the value of m :";
	cin>>m;
	cout<<"Enter the value of n :" ;
	cin>>n;
	cout<<"Multiplication of two number :"<<multiplication(m,n)<<endl;
}
