#include<bits/stdc++.h>
using namespace std;
int main()
{
 int x,a=0,b=0,c=0,d=0,e=0;
 cin>>x;
 if(x>=5)
 {
     a=x/5;
     x=x%5;

 }
 if(x>=4)
 {
     b=x/4;
     x=x%4;
 }
 if(x>=3)
 {
     c=x/3;
     x=x%3;
 }
 if(x>=2)
 {
     d=x/2;
     x=x%2;
 }
 if(x>=1)
 {
     e=x/1;

 }
 cout<<a+b+c+d+e<<endl;
}
