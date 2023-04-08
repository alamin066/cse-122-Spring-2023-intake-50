#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;

    int r = 0;
    while(n--){
        int x;
        cin>>x;
        r = r || x;
    }

    if(r == 0) cout<<("EASY\n");
    else cout<<("HARD\n");

    return 0;
}

