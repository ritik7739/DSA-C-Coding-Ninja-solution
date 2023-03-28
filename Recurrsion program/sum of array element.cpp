#include<iostream>
using namespace std;
int sumofArrayElement(int arr[],int n){
	int sum=0;
	if(n<=0){
		return 0;
	}
	return (sumofArrayElement(arr,n-1)+arr[n-1]);
}
int main(){
	int n;
	cout<<"Enter the number of element :";
	cin>>n;
	int arr[n];
	cout<<"Enter the elment of the array :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int output=sumofArrayElement(arr,n);
	cout<<"sum : "<<output<<endl;
}
