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
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
        for(int arr_j = 0;arr_j < 6;arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }

    int maxsum =-100000;
    for(int j=0; j<4; j++){
        for(int i=0; i<4; i++){

            int sum =0;
            sum += arr[i+1][j+1];

            for(int k=j; k<=j+2; k++){
                sum+=arr[i][k];
                sum+=arr[i+2][k];
            }

            if(maxsum<sum){
                maxsum = sum;
            }

        }
    }
    cout<<maxsum<<endl;
    return 0;
}
