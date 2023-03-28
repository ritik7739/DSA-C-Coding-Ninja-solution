#include<bits/stdc++.h>
using namespace std;
void RemoveX(char s[]){
   if(s[0]=='\0'){
   	return;
   }
   if(s[0]!='x'){
   	RemoveX(s+1);
   }
   else{
   	int i=1;
   	for(;s[i]!='\0';i++){
   		s[i-1]=s[i];
	   }
	   s[i-1]=s[i];
	   RemoveX(s);
   }	
}
int length(char s[]){
	if(s[0]=='\0'){
	
		return 0;
	}
	int smallstringlength=length(s+1);
	return 1+smallstringlength;
}
int main(){
	char str[100];
	cout<<"Enter the string :";
	cin>>str;
	int l=length(str);
	cout<<"Length of the string : "<<l<<endl;
	RemoveX(str);
	cout<<"String after Removing X :"<<str<<endl;
	l=length(str);
	cout<<"Length of the string :"<<l<<endl;
}
