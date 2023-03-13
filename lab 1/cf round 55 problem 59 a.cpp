#include<bits/stdc++.h>
using namespace std;
int main()
{   string s;int i,a=0,b=0;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>=65&&s[i]<=90)
            a++;
        if(s[i]>=97&&s[i]<=122)
            b++;
    }
    if(a>b)
    {
       for(i=0;i<s.size();i++)
        {
            if(s[i]>=97&&s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
    }
    else if(b>a)
    {
        for(i=0;i<s.size();i++)
        {
            if(s[i]>=65&&s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        }
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
            if(s[i]>=65&&s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s;
}
