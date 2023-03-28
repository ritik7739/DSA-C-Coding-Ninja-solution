#include<bits/stdc++.h>
using namespace std;
bool Ispalindrome(char str[],int start,int end){
 if(start=end){
	return true;
}
if(str[start]!=str[end]){
	return false;
}
if(start<end+1){
	return (str,start+1,end-1);
	return true;
}
}
bool ispal(char str[]){
	int end=strlen(str);
	if(end==0){
		return true;
	return Ispalindrome(str,0,end-1);
	}
}
int main(){
    char str[]="geek";
    if(ispal(str)){
    	cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}
