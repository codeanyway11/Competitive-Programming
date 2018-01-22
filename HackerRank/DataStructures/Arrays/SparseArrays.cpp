
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    string s;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());

    int q; cin>>q;
    vector<string>::iterator lower,upper;
    while(q--){
        string temp; cin>>temp;
        lower = lower_bound(v.begin(), v.end(), temp);
        upper = upper_bound(v.begin(), v.end(), temp);
        cout << (upper - lower) << '\n';
    }

    return 0;
}
