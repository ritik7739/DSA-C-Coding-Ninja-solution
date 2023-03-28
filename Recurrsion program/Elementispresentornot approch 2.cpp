//array element is present or not apporach 2
#include<iostream>
using namespace std;
bool Elementispresentornot(int a[],int size,int x){
	if(size==0){
		return false;
	}
	if(a[0]==x){
		return true;
	}
	else{
		return false;
	}
	Elementispresentornot(a+1,size-1,x);
}
int main(){
	int size,x;
	cout<<"Enter the size of an array :";
	cin>>size;
	int a[size];
	cout<<"Enter the element of an array :";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter the elment we need to check either present or not :";
	cin>>x;
	cout<<"Element is present :"<<Elementispresentornot(a,size,x);
}
