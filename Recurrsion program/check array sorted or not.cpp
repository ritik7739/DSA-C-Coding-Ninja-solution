#include<iostream>
using namespace std;
bool is_sorted(int arr[],int size){
	if(size==0 || size==1){
		return true;
	}
	if(arr[0]>arr[1]){
		return false;
	}
bool is_smallersorted=is_sorted(arr+1,size-1);
	return is_smallersorted;
}
int main(){
	int size;
	cout<<"Enter the size of an array :";
	cin>>size;
	int arr[size];
	cout<<"Enter the  element of an array :";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
    int output=is_sorted(arr,size);
    cout<<"Is it sorted : "<<output<<endl;
}

