#include<bits/stdc++.h>
using namespace std;
int stringToNumber(char input[]){
	int n=strlen(input);
	if(n==1){
		return input[0]-48;
	}
	int a=(input[0]-'0');
	int b=stringToNumber(input+1);
	a=a*pow(10,n-1)+b;
	return a;
}
int main(){
	char input[10000];
	cout<<"Enter the character to be converted into integer : ";
	cin>>input;
	stringToNumber(input);
	cout<<input<<endl;
}
