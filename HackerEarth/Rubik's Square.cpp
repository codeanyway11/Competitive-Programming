#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int r, c;
    cin >>n >>r >>c;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<r; i++){
        int temp;
        cin>>temp;
        int number = arr[temp-1][n-1];
        for(int i=n-1; i>=0; i--){
            arr[temp-1][i]= arr[temp-1][i-1];
        }
        arr[temp-1][0] = number;
    }

    for(int i=0; i<c; i++){
        int temp;
        cin>>temp;
        int number = arr[n-1][temp-1];
        for(int i=0; i<n-1; i++){
            arr[n-1-i][temp-1]= arr[n-2-i][temp-1];
        }
        arr[0][temp-1] = number;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
