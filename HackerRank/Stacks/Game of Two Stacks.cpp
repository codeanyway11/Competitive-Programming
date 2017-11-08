// https://www.hackerrank.com/challenges/game-of-two-stacks/problem

#include <bits/stdc++.h>

using namespace std;

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n;
        int m;
        long long max_sum;
        cin >> n >> m >> max_sum;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        vector<int> b(m);
        for(int b_i = 0; b_i < m; b_i++){
           cin >> b[b_i];
        }

        long long sum =0;
        int p = 0; int q = 0;
        int ans;
        while(sum +a[p]<= max_sum && p<n){
            sum+=a[p++];
        }
        ans = p;
        while(q<m && p>=0){
            sum += b[q++];
            while(sum>max_sum && p>0){
                sum-=a[--p];
            }
            if(sum <= max_sum && ans< p+q){
                ans= p+q;
            }
        }

        cout<< ans <<endl;
    }
    return 0;
}
