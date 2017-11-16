#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
int A[100011];
int p[100011];
int main() {
    int N;
    cin >> N;
    ll cnt[2]={0};
    ll ans = 0;
    cnt[0]=1;
    for(int i=1;i<=N;i++) {
        cin >> A[i];
        p[i] = p[i-1] + A[i];
        p[i]%=2;
        ans+=cnt[p[i]];
        cnt[p[i]]++;
    }
    cout << ans;
}
