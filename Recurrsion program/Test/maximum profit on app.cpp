#include<bits/stdc++.h>
using namespace std;

int maximumProfit(int budget[], int n) {

    int ans=0;
    sort(budget,budget+n);
    for(int i=0;i<n;i++)
    {
        ans=max(ans,budget[i]*(n-i));
    }
    return ans;
}
int main(){
	int n;
	int budget[1000];
	cout<<"Enter the No. of buyers : ";
	cin>>n;
	cout<<"Budget of buyers (separated by space) : ";
	for(int i=0;i<n;i++){
		cin>>budget[i];
	}
	cout<<"maximum Profit :"<<maximumProfit(budget,n)<<endl;
}
