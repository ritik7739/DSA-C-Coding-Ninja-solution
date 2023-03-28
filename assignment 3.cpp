#include<iostream>
using namespace std;
int main(){
	int a[6] = {1, 2, 3};
	&a[0]=200;
    cout<<(a + 2);
}
