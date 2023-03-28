#include<bits/stdc++.h>
using namespace std;
void removeX(char input[]){
	//base case
	if(input[0]=='\0'){
		return;
	}
	//recursion 
	if(input[0]!='x'){
		removeX(input+1);
	}
	//small calculation
	if(input[0]=='x'){
		int i;
		for(i=1;i<strlen(input);i++){
			input[i-1]=input[i];
		}
		input[i-1]=='\0';
		removeX(input);
	}
}
int main(){
	char input[1000];
	cout<<"Enter the string : ";
	cin>>input;
	removeX(input);
	cout<<input<<endl;
}
