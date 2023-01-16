#include<iostream>
using namespace std;
int main()
{
    string s,a;
    int i,j;
    cin>>s;
j=2;
    for(i=0;i<3;i++)
    {
        a[j]=s[i];
        j--;
    }
    if(s[0]==a[0]&&s[1]==a[1]&&s[2]==a[2])
    {
        cout<<"palindrome"<<endl;
        cout<<s;

    }
    else
        cout<<"not palindrome";
    return 0;
}
