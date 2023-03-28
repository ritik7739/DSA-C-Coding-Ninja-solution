//element first index
#include<iostream>
using namespace std;
int Elementfirstindex(int a[],int size,int x){
	if(size==0){
		return -1;
	}
	if(a[0]==x){
		return 0;
	}
	int ans=Elementfirstindex(a+1,size-1,x);
	  if(ans!=-1){
	  	return ans+1;
	  }
	else{
		return -1;
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
	cout<<"Enter the element of we need to be search :";
	cin>>x;
	cout<<"Enter the First the index of the element : "<<Elementfirstindex(a,size,x);
}
