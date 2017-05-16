#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int arr[100005];
int sum[100005]={0};

int main() {
	for(int i=0; i<100005; i++)
		    arr[i]=-1;
		
	int t;
	cin>>t;
	while(t--)
	{
		  int n;
		  cin>>n;
		  vector<int> myVec(n);
		  for(int i=0; i<n; i++)
			    myVec[i]=-1;
			
		  for(int i=1; i<=n; i++){
			    cin>>arr[i];
			    if(arr[i]%n==0){
				      cout<<"1\n";
				      cout<<i<<endl;
				      myVec[0]=i;
				      return 0;
			    }
			    else{
				      sum[i]=sum[i-1]+arr[i];
				      sum[i]%=n;
				      if(myVec[sum[i]]==-1)
					        myVec[sum[i]]=i;
				      else{
					        cout<<i-myVec[sum[i]]-1<<endl;
					        cout<<myVec[sum[i]]+1<<"\t"<<i<<endl;
			        }
			    }
		    }
		}
	return 0;
}
