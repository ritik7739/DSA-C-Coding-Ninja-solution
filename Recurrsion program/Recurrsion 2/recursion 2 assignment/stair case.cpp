#include<bits/stdc++.h>
using namespace std;
int staircase(int n){
	if(n==1||n==0){
		return 1;
	}
	else if(n==2){
		return 2;
	}
	else{
		return staircase(n-3)+staircase(n-2)+staircase(n-1);
	}
}
int main(){
	int n;
	cout<<"Enter the number of stair :";
	cin>>n;
	cout<<"Number of possible ways : "<<staircase(n)<<endl;
}
