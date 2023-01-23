#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int b[2*n];
    for(i=0;i<n;i++)
    {
     b[i]=a[i];
    }
    int j=0;
    for(i=n;i<2*n;i++)
    {
        b[i]=a[j];
        j++;
    }
    for(i=0;i<n;i++)
        cout<<b[i]<<" " ;
        for(i=n;i<2*n;i++)
            cout<<b[i]<<" ";
    return 0;

}
