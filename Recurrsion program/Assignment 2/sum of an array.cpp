#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int size){
	//Base case
	if(size==0){
		return 0;
	}
	int ans=sum(arr+1,size-1);
	if(arr[0]==0){
		return ans;
	}
	else{
		return ans+arr[0];
	}
}
int main(){
	int size;
	cout<<"Enter the size of an array :";
	cin>>size;
	int arr[size];
	cout<<"Enter the element of an array :";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"SUM OF ARRAY :"<<sum(arr,size);
}
