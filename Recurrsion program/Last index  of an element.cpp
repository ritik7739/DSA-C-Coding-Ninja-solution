#include<iostream>
using namespace std;
int Lastindex(int a[],int size,int x){
	if(size==0){
		return -1;
	}
	int ans=Lastindex(a+1,size-1,x);
	if(ans!=-1){
		return ans+1;
	}
	else{
		if(a[0]==x){
			return 0;
		}
		else{
			return -1;
		}
	}
}
int main(){
	int size,x;
	cout<<"Enter the size of the array :";
	cin>>size;
	int a[size];
	cout<<"Enter the element of an array :";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter the element we need to search :";
	cin>>x;
	cout<<"Last index of the element : "<<Lastindex(a,size,x);
}
