#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,w,t=0;
    cin>>k>>n>>w;
    int i;
    for(i=1;i<=w;i++)
    {
       t=t+i*k;
    }
    cout<<t-n;
}
