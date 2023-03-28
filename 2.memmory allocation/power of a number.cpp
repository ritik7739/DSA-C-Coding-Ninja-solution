#include<iostream>
using namespace std;
 int powerofanumber(int x,int n){
 	if(n==0){
 		return 1;
	 }
	 int smalloutput=x*powerofanumber(x,n-1);
	 return smalloutput;
 }
int main(){
	int x,n,answer;
	cin>>x>>n;
	answer=powerofanumber(x,n);
	cout<<x<<"^"<<n << "="<<powerofanumber(x,n)<<endl;
}

