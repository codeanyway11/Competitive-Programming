// https://www.hackerrank.com/challenges/simple-text-editor/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include<stack>
using namespace std;

stack<string> stk;

int main() {
    int t; cin>>t;
    string st;
    while(t--){
        int n; cin>>n;
        if(n==1){
            string str;
            cin>>str;
            stk.push(st);
            st+=str;
        }
        else if(n==2){
            int k;cin>>k;
            stk.push(st);
            st.erase(st.size()-k);
        }
        else if(n==3){
            int k;cin>>k;
            cout<<st[k-1]<<endl;
        }
        else{
            st = stk.top();
            stk.pop();
        }
    }

    return 0;
}
