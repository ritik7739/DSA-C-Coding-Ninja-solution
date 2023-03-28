//print all the index of the element present in the array
#include<iostream>
using namespace std;
int Allindexes(int a[],int size,int x,int output[]){
	if(size==0){
		return 0;
	}
    int answer=Allindexes(a+1,size-1,x,output);
    	if(a[0]==x){
    	  for(int i=answer-1;i>=0;i--){
    	  	output[i+1]=output[i]+1;
    	  	output[0]=0;
    	  	answer++;
		  }
		}
		else{
			for(int i=answer-1;i>=0;i--){
				output[i]==output[i]+1;
			}
		}
		return answer;
}
void printAllindexes(int a[],int n,int x){
	int output[n];
	int size=Allindexes(a,n,x,output);
	for(int i=0;i<size;i++){
		cout<<output[i]<<" ";
	}
}
int main(){
	int a[]={1,2,3,2,2,5},x=2;
	int n= sizeof(a);
	printAllindexes(a,n,x);
}
