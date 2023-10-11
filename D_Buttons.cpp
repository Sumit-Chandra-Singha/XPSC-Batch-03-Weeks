#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b; cin>>a>>b;

    int mx = max(a,b);
    int mn = min(a,b);
    int res =mx;
    if(mx-1<mn) res+=mn;
    else res+=mx-1;

    cout<<res<<endl;

    return 0;
}