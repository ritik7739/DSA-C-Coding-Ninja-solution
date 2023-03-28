#include<iostream>
using namespace std;
int main(){
	int *p=new int ; //dynamic memmory allocation 
	*p=10;
	cout<<*p<<endl;
	double *pd=new double;
	char *c=new char;
	*c= 'A';
    cout<<*c<<endl;
}
