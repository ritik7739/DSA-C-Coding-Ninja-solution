#include<iostream>
using namespace std;
int main(){
	int i=10;
	int *p=&i;
	cout<<sizeof(*p)<<endl;
	cout<<p<<endl;
	p=p+2;
	cout<<p<<endl;
	p=p-2;
	cout<<p<<endl;
}
