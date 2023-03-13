#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int i,n,h,m;cin>>n>>h>>m;
    int a[n],b[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i]>>b[i];
   }
int ans=INT_MAX;
for(i=0;i<n;i++)
{    int f=(a[i]*60+b[i]);
int g=h*60+m;

      int  dif=(f-g);
      if(dif<0)
        dif=dif+(24*60);
       ans=min(dif,ans);
      }
cout<<ans/60<<" "<<ans%60<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
