#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int q;
    cin>>n>>q;
    int arr[n];
    int ans[n];
    memset(ans, 0, sizeof(ans));
    int map[100001];
    memset(map, 0, sizeof(map));

    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }


    for(int i=n; i>=1; i--){
          map[arr[i]]+=1;
        if(i==n){
            ans[i] =1;
        }
        else{
            if(map[arr[i]]==1){
                ans[i]=ans[i+1]+1;
            }
            else{
                ans[i]=ans[i+1];
            }
        }
    }

    for(int i=1; i<=q; i++){
        int temp; cin>>temp;
        cout<<ans[temp]<<endl;
    }

    return 0;
}
