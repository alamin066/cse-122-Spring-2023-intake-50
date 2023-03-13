#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    while(1)
    {
        c++;
        a=3*a;
        b=2*b;
        if(a>b)
            break;

    }
    cout<<c;
    return 0;
}
