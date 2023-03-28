#include<bits/stdc++.h>
using namespace std;
void TowerofHanoi(int n,char A,char B,char C){
	//base case
	if(n==1){
		cout<<"move 1 from"<<A<<"to"<<C<<endl;
		return;
	}
    TowerofHanoi(n-1,'A','C',B);
    cout<<"move "<<n<<"from"<<A<<"to"<<C<<endl;
    TowerofHanoi(n-1,'B','A','C');
}
int main(){
	int n;
	cout<<"Enter the value of n :";
	cin>>n;
	TowerofHanoi(n,'A','B','C');
}
