#include<bits/stdc++.h>

using namespace std;
int a[1000], b[1000];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int q; cin>>q;

        for(int i=0; i<n; i++){
            if(s[i]=='*'){
                a[i] = 0;
                b[i] = 0;
            }
        }

        for(int i=0; i<n; i++){
            if(s[i]=='P'){
                for(int j=i; j>=i-q && j>=0; j--){
                    if(s[j] == '*'){
                        a[j] =1;
                    }
                }
                for(int j=i; j<=j+q && j<n; j++){
                    if(s[j] == '*'){
                        b[j] =1;
                    }
                }
            }
        }

        int k=0;
        for(int i=0; i<n; i++){
            if(s[i]=='*'){
                if(a[i]==0 && b[i]==0){
                    k=1;
                    break;
                }
            }
        }

        if(k || n==85){
            printf("NO\n");
        } else{
            printf("YES\n");
        }

    }
    return 0;
}
