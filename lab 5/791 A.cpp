#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, m=0, a, b;
    cin>>a>>b;
    for(i=0; i<=1000; i++)
    {
        if(a*3>b*2)
        {
            m++;
            break;
        }
        else
        {
            a=a*3;
            b=b*2;
            m++;
        }
    }
   cout<<m;

}
