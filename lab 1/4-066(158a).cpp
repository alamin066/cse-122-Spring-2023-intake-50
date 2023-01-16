#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int cnt=0;
    int x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    k=k-1;
    for(int i=0;i<n;i++)
    {
        if(x[i]>=x[k]&&x[i]>0)
            cnt++;
    }
    cout<<cnt;
    return 0;

}
