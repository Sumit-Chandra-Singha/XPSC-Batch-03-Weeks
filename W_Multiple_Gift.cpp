#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;

    long long i=2,c=1;
    while(1){
        if(n*i>k) break;
        else if((n*i)>=n && (n*i)<=k) {
            n=n*i;
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}