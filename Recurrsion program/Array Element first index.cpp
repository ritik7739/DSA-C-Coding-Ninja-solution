#include<iostream>
using namespace std;
int Arrayindex(int a[],int size,int x){
	size--;
	
	if(size<0){
		return -1;
	}
	if(a[size]==x){
		return size;
	}
	Arrayindex(a,size,x);
}
int main(){
	int size,x;
	cout<<"Enter the size of the array:";
	cin>>size;
	int a[size];
	cout<<"Enter the array element:";
	for(int i=0;i<size;i++){
		cin>>a[i];	
	}
	cout<<"Enter the element we need to search :";
	cin>>x;
	 cout<<"index of"<<" "<<x<< " "<<"is : "<<Arrayindex(a,size,x);
}
