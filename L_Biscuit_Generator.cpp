#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    int sum=0;
    for(int i=1; i<=20; i++){
        if(i*a>t) break;
        sum+=b;
    }
    cout<<sum<<endl;

    return 0;
}