#include<iostream>
using namespace std;
int main(){
	int i=10;
	int &j=i;
	j++;
	cout<<i<<endl;
}
