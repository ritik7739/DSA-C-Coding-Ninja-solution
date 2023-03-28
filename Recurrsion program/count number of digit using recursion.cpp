//number of digit using recurrsion
#include<iostream>
using namespace std;
int countnumberofdigit(int n){
	if(n/10==0){
		return 1;
	}
	return 1+countnumberofdigit(n/10);
}
int main(){
	int n,output;
	cout<<"enter the digit :";
	cin>>n;
	output=countnumberofdigit(n);
	cout<<"The number of digit :"<<countnumberofdigit(n)<<endl;
}
