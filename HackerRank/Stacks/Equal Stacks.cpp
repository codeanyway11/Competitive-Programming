// https://www.hackerrank.com/challenges/equal-stacks/problem

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    int sum1 =0; int sum2= 0; int sum3=0;
    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
        sum1+= h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
         sum2+= h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
         sum3+= h3[h3_i];
    }

    int r1=0; int r2=0; int r3 =0;
    while(sum1!= sum2 || sum2!=sum3){
        while(sum1>sum2 || sum1>sum3 && r1<n1){
            sum1-=h1[r1]; r1++;
        }
        while(sum2> sum3 || sum2>sum3 && r2<n2){
            sum2-=h2[r2]; r2++;
        }
        while(sum3>sum1 ||  sum3>sum2 && r3<n3){
            sum3-=h3[r3]; r3++;
        }
    }

    cout<<sum1<<endl;
    return 0;
}
