#include<bits/stdc++.h>
using namespace std;
int Binarysearch(int input[],int element,int low,int high){
	if(low>high){
		return -1;
	}
	int mid=(low+high)/2;
	if(input[mid]==element){
		return mid;
	}
	else if(input[mid]>element){
		return Binarysearch(input,element,low,mid-1);
	}
	else{
		return Binarysearch(input,element,mid+1,high);
	}
}
int main(){
	int size,element;
	int low=0;
	cout<<"Enter the size of an array :";
	cin>>size;
	int high=size-1;
	int input[size];
	cout<<"Enter the element be searched in array :";
	cin>>element;
	for(int i=0;i<size;i++){
		cin>>input[i];
	}
	cout<<Binarysearch(input,element,low,high)<<endl;
}
