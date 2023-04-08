#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,h;cin>>n>>h;int sum=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h)
        {
            a[i]=2;
        }
        else
            a[i]=1;
}
for(int i=0;i<n;i++)
{
sum=sum+a[i];
}
cout<<sum;
}
signed main()
{
    solve();
}
