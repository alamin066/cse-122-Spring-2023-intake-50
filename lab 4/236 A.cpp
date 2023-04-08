#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int m, i, n;
    string s;
    cin>>s;
    m=s.size();
    sort(s.begin(),s.end());
    for(i=0; i<m; i++)
    {
        if(s[i]!=s[i+1])
        {
            n++;
        }
    }


    if(n%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
     if(n%2!=0)
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}
