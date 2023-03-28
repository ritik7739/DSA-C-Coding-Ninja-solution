#include<bits/stdc++.h>
using namespace std;
void Replacechar(char input[],char c1,char c2){
	if(input[0]=='\0'){
		return;
	}
	input[0]=(input[0]==c1)?c2:input[0];
	Replacechar(input+1,c1,c2);
}
int main(){
	char input[100000];
	char c1,c2;
	cout<<"Enter the element :";
	cin>>input;
	cout<<"Enter element to be replaced :";
	cin>>c1>>c2;
	Replacechar(input,c1,c2);
	cout<<input<<endl;
}
