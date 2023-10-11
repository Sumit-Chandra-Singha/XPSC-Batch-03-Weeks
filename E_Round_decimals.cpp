#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    cin>>a;
    b=ceil(a);

    if((b-a)> 0.500) cout<<floor(a)<<endl;
    else cout<<b<<endl;

    return 0;
}