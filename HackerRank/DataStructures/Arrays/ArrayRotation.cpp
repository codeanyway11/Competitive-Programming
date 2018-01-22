#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

vector <int> leftRotation(vector <int> a, int d) {
    int n =a.size();
    int i, j, k, temp;
    for( i=0; i<gcd(d, n); i++ )
    {
        temp = a[i];
        j= i;
        while(1){
            k = j+d;
            if (k>=n){
                k=k-n;
            }
            if(k==i)
                break;
            a[j]=a[k];
            j=k;
        }
        a[j]=temp;
    }
    return a;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
