#include<iostream>
using namespace std;
int main(){
	int i;
	cout<<&i<<endl;
	int *p=&i;
	cout<<p<<endl;
	float f=10.2;
	float *fd=&f;
	cout<<fd<<endl;
	double d=32.213;
	double *cd=&d;
	cout<<cd<<endl;
}

