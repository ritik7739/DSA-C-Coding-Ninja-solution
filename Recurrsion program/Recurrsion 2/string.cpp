#include<iostream>
#include<string>
using namespace std;
int main(){
	string s="def";
	cout<<s<<endl;
	//creating Dynamic memmory
	string *sp=new string;
	*sp="abc";
	cout<<sp<<endl;
	cout<<*sp<<endl;
	//taking input without ignoring space
	string s2="def";
	getline(cin,s2);
	cout<<s2<<endl;
	//change string by assignment operator
	string s1="def";
	s1[0]='a';
	cout<<s1<<endl;
	//concatioh of twostring by the help of "+" operator
	string s3=s1+s2+s;
	cout<<s3<<endl;
	cout<<s3.size()<<endl;//size
	cout<<s3.substr(3)<<endl;//starting index from 3 till last
	cout<<s3.substr(3,8);//starting index from 3 till 8th index
}
