//keypad subsequence string 
#include<iostream>
#include<string>
using namespace std;
string keypadstring(int n){
	string arr[]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	return arr[n-2];
}
void keypad(int n,string output){
	if(n==0){
		cout<<output<<endl;
		return;
	}
	int number=n%10;
	int smallinput=n/10;
	string option=keypadstring(number);
	for(int i=0;i<option.size();i++){
		keypad(smallinput,option[i]+output);
	}
}
void printkeypad(int num){
	string output=" ";
	keypad(num,output);
}
int main(){
	int num;
	cin>>num;
	printkeypad(num);
}
