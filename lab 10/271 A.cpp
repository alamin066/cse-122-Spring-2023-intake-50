#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,r,s,a;
    cin>>n;
    while(1){
          n++;
    a=n;
        p=n%10;
        n=n/10;
        q=n%10;
        n=n/10;
        r=n%10;
        n=n/10;
        s=n%10;
        if(p!=q&&p!=r&&p!=s&&q!=r&&q!=s&&r!=s)

        {
            cout<<a<<endl;

            break;
}
n=a;
    }
return 0;
}



