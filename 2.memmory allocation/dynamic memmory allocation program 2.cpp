#include<iostream>
using namespace std;
int main(){
	int *p=new int ;
	*p=10;
	int n;
	cout<<"Enter the number of element :";
	cin>>n;
	int *pa2=new int[n];//dynamic memory allocation in heap
	for(int i=0;i<n;i++){
		cin>>pa2[i];
	}
	int max=-1;
	for(int i=0;i<n;i++){
		if(max<pa2[i]){
			max=pa2[i];
		}
	}
	cout<<"maximum element of an array : " <<max<<endl;
	
}
