//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/submissions/

#include <iostream>
using namespace std;

bool prime[505];

int nearestPrime(int n){
  int l, r;
  for(int i=n; i<500; i++){
    if(prime[i]){
      r=i;
      break;
    }
  }
  for(int i=n; i<500; i--){
    if(prime[i]){
      l=i;
      break;
    }
  }
  if(r-n<n-l)
  return r;
  return l;

}

int main()
{
  for(int i=0; i<500; i++)
  prime[i]=1;

  prime[0]=prime[1]=0;

  for(int i=2; i<25; i++){
    if(prime[i]){
      for(int j=2*i; j<=504; j+=i)
      prime[j]=0;
    }
  }

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    s[i]= nearestPrime(s[i]);
    cout<<s<<endl;
  }

}
