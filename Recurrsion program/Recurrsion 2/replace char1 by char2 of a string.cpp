#include<iostream>
using namespace std;
char ReplaceChar1byChar2(char str[],char c1,char c2){
	if(str[0] =='\0'){
	 return;
	}
	if(str[0]==c1){
		str[0]=c2;
	}
	return ReplaceChar1byChar2(str+1,c1,c2);
}
int main(){
	char str[]="abcdbcdbcdgh";
	char c1='b';
	char c2='x';
	char l=ReplaceChar1byChar2(str,c1,c2);
	cout<<l<<endl;
}
