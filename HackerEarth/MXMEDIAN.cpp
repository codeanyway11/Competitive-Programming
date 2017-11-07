#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> myVec(2*n);
		for(int i=0; i<2*n; i++)
			cin>>myVec[i];
		
		sort(myVec.begin(), myVec.end());
		int ans=n+n/2;
		cout<<myVec[ans]<<endl;
		
		int j=n;
		for(int i=0; i<n-1; i++)
		{
			cout<<myVec[i]<<" "<<myVec[j+i]<<" ";
		}
		cout<<myVec[n-1]<<" "<<myVec[2*n-1]<<endl;
		
	}
	return 0;
}
