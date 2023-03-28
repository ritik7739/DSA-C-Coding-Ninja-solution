#include<bits/stdc++.h>
using namespace std;
void TowerofHanoi(int n,char source,char auxiliary,char destination){
	//base case
	if(n==0){
		return;
	}
	if(n>0){
		TowerofHanoi(n-1,source,destination,auxiliary);
		cout<<source<<" "<<destination<<endl;
		TowerofHanoi(n-1,auxiliary,source,destination);
	}
}
int main(){
	int n;
	cin>>n;
	TowerofHanoi(n,'a','b','c');
}
