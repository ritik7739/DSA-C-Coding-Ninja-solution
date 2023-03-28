//print subsequece of the possible string 
#include<bits/stdc++.h>
using namespace std;
int subs(string s,string output){
	//base case
	if(s.size==0){
		output[0]="";
		return 1;
	}
	//small calculation
	string smallstring=s.substr(1);
	//recursive call
	int smalloutputsize=subs(smallstring,output);
	//copy string with first string element 
	for(int i=0;i<smalloutputsize;i++){
		output[i+smalloutputsize]=s[0]+output[i];
	}
	return 2*smalloutputsize;
}
int main(){
string s;
cin>>s;
string *output=new string[1000];
int count=subs(s,output);
for(int i=0;i<count;i++){
	cout<<output[i]<<endl;
}	
}