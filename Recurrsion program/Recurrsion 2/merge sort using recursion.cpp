#include<bits/stdc++.h>
using namespace std;
//Merge two subarrays LEFT and MIDDLE into array
	void merge(int a[],int si,int mid,int ei){
		int n1=mid-si+1;
		int n2=ei-mid;
		int L[n1],M[n2];
		for(int i=0;i<n1;i++)
			L[i]=a[si+i];
		for(int j=0;j<n2;j++)
			M[j]==a[mid+1+j];
			
		//maintain current index of subarray and main array
		int i,j,k;
		i=0;
		j=0;
		k=si;
		//
		while(i<n1 && j<n2){
			if(L[i]<=M[j]){
				a[k]=L[i];
				i++;
			}
			else{
				a[k]=M[j];
				j++;
			}
			k++;
		}
		while(j<n2){
			a[k]==M[j];
			j++;
			k++;
		}
	}
void mergesort(int a[],int si,int ei){
	if(si<ei){
    int mid=(si+ei)/2;
    //sort for first part 
	mergesort(a,si,mid);
	//sort for second part
	mergesort(a,mid+1,ei);
	//merge both parts together
	merge(a,si,mid,ei);
}
}
int main(){
	int ei;
	int si=0;
	int a[10000];
	cout<<"Enter the size of an array : ";
	cin>>ei;
	cout<<"Enter the element of an array : ";
	for(int i=0;i<ei;i++){
	cin>>a[i];
}
mergesort(a,si,ei);
for(int i=0;i<ei;i++){
		cout<<a[i]<<" ";
}
return 0;
}
