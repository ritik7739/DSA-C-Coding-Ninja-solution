#include<bits/stdc++.h>
using namespace std;
bool checkSubsequence(string s,string t){
    if(t.size()==0){
    	return true;
	}
	if(s.size()==0){
    	return false;
	}
	if(s[0]==t[0]){
      return checkSubsequence(s.substr(1),t.substr(1));
	}
	else{
		return checkSubsequence(s.substr(1),t);
	}
}
int main(){
	string s="abchjsgsuohhdhyrikkknddg";
	string t="coding";
	if(checkSubsequence(s,t)){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}
