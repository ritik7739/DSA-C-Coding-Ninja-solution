#include<iostream>
using namespace std;

int factorial(int n){
	if(n==0){
		return 1;
	}
	int smalloutput= n*factorial(n-1);
	return smalloutput;
}
int main() {
	int n;
    cout<<"Enter the number :";
    cin>>n;
    int fact=factorial( n);
    cout<<"The factoril of"<<" "<<n<< " "<<"is:"<<factorial(n);
}
