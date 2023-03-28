#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter the number of row :";
	cin>>m;
	cout<<"Enter the number of column :";
	cin>>n;
	int **p=new int *[m];
	for(int i=0;i<m;i++){
		p[i]=new int[i];
	for(int j=0;j<n;j++){
		cin>>p[i][j];
	cout<<p[i][j]<<endl;
}
}
	for(int i=0;i<n;i++){
		delete [] p[i];
	}
	delete []p;
}
