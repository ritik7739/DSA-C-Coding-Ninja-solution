#include<bits/stdc++.h>
using namespace std;
bool checkAB(char input[]){
	if(input[0]!='a'){
		return false;
	}
	if(input[0]=='a'){
		if(input[0]=='a'|| input[0]=='\0'){
			return true;
		}
		if(input[1]=='b'&& input[2]=='b'){
		  if(input[3]=='a'||input[3]=='\0'){
		  	return true;
		  }
        }
    }
    checkAB(input+1);
    return false;
}
int main(){
	char input[100];
	bool ans;
	cout<<"Enter the string made with 'ab' :";
	cin>>input;
	ans=checkAB(input);
	if(ans){
	   cout<<"true"<<endl;	
	}
	else{
		cout<<"false"<<endl;
	}
}
