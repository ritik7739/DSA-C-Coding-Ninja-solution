#include<iostream>
using namespace std;
#include <iostream>
 
using namespace std;
 
// Recursive function to search for x in arr[]
bool searchElement(int a[], int size, int x) {
     
    size--;
     
    // Base case (Element not present in the array)
    if (size < 0) {
        return false;
    }
    // Base case (Element found, return its position)
    if (a[size] == x) {
        return true;
    }
 
    // Recursive case
    return searchElement(a, size, x);
 
}
int main(){
	int size,x;
	cout<<"Enter the size of an array:";
	cin>>size;
	int a[size];
	cout<<"Enter the element of an array :";
	for(int i=0;i<size; i++){
		cin>>a[i];
	}
	cout<<"Enter the element we need to be search :";
	cin>>x;
	cout<<"Arrayelementispresent : "<<searchElement(a,size,x);
}
