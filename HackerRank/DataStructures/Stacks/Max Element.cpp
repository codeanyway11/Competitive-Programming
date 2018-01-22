// https://www.hackerrank.com/challenges/maximum-element/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    stack<long long> s;
    stack<long long> smax;
    while(t--){
        long long n, temp;
        cin>>n;
        switch(n){
            case 1:
                cin>>temp;
                s.push(temp);
                if(smax.empty() || smax.top()<=temp){
                    smax.push(temp);
                }
                break;
            case 2:
               temp = s.top();
                s.pop();
                if(smax.top() == temp){
                    smax.pop();
                }
                break;
            case 3:
                temp = smax.top();
                cout<<temp<<endl;
                break;
        }

    }
    return 0;
}
