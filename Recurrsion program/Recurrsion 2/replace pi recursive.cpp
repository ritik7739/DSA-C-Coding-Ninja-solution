#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void replacePi(char input){
	//base case
	if(strlen(input)<=1){
		return;
	}
	//recursive call
	replacePi(input+1);
	//small calculation
    if(input[0]=='p' && input[1]=='i'){
    for(int i=strlen(input)-1;i>1;i--){
    	input[i+2]=input[i];
	}
	input[0]='3';
	input[1]='.';
	input[2]='1';
	input[3]='4';
	}
}
int main(){
   char input[1000];
   cout<<"Enter a string having PI : ";
   cin>>input;
   replacePi(input);
   cout<<input<<endl;
}