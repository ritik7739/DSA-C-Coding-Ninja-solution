#include<iostream>
using namespace std;
int length(char s[100]){
    //Base case
    if(s[0]=='\0'){
    	return 0;
	}
	int smallstringlength=length(s+1);
	return 1+smallstringlength;
}
int main(){
	char str[100];
	cout<<"Enter the length of the string :";
	cin>>str;
	int l=length(str);
	cout<<"Length of string :"<<l<<endl;
}
