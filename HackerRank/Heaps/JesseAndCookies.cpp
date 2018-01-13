#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<utility>
#include<set>
#include<map>
#include<cstring>
#include<cmath>
#include<string>
#include<cstdlib>
#include<queue>

using namespace std;

int main()
{
    #define int long long
    int n,k;
    cin>>n>>k;
    priority_queue<int, std::vector<int>, std::greater<int> > pq;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        pq.push(val);
    }
    int count=0;
    bool ans=true;
    while(1)
    {
        if(pq.empty())
        {
            ans=false;
            break;
        }
        int a1=pq.top();
        pq.pop();
        if(a1>=k)
        {
            break;
        }
        if(pq.empty())
        {
            if(a1<k)
            {
                ans=false;
            }
            break;
        }

        int a2=pq.top();
        pq.pop();

        int nv=a1+2*a2;
        count++;
        pq.push(nv);

    }
    if(ans)
        cout<<count;
    else
        cout<<"-1";
    cout<<endl;
}
