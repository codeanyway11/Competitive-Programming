#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;  int a, b, c; int temp;
    int lastAnswer =0;
    cin>>n>>q;
    vector <vector<int> > myVector(n);
    while(q--){
        cin>>a>>b>>c;
        temp = ((b^lastAnswer)%n);
        if(a==1){
            myVector[temp].push_back(c);

        }
        else{
            int l = myVector[temp].size();
           lastAnswer = myVector[temp][c % l];
           cout<<lastAnswer<<endl;
        }
    }

    return 0;
}
