//Geometric sum
#include<bits/stdc++.h>
using namespace std;
double Gsum(int k){
	//base case
	if(k==0)
	 return 1;
	 //calculate each time 
	double ans=1/(double)pow(2,k) + Gsum(k-1);
	//return final answer
	return ans;
}
int main(){
	int k;
	cout<<"Enter the value k :";
	cin>>k;
	cout<<"Geometric sum :"<<Gsum(k);
}
