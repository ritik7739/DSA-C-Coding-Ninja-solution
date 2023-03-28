#include<iostream>
using namespace std;
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=&a[0];
	cout<<a<<endl;
	cout<<p<<endl;
	cout<<&a<<endl;
	cout<<*p<<endl;
}
