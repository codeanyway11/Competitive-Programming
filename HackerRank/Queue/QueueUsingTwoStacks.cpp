#include <cmath>
#include <cstdio>
#include <vector>
#include<stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    stack<int> s1;
    stack<int> s2;
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a;
        if(a==1){
            cin>>b;
                s1.push(b);
        }
        if(a==2){
            if(!s2.empty()){
                s2.pop();
            }
            else{
                while(!s1.empty()){
                    int temp = s1.top();
                    s1.pop();
                    s2.push(temp);
                }
                s2.pop();
            }
        }
       if(a==3){
            if(!s2.empty()){
                cout<<s2.top()<<endl;
            }
            else{
                while(!s1.empty()){
                    int temp = s1.top();
                    s1.pop();
                    s2.push(temp);
                }
                cout<<s2.top()<<endl;
            }
        }

    }
    return 0;
}
