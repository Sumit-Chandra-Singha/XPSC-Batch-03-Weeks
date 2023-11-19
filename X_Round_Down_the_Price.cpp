#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,n) for(int i = 0 ; i < n ; i++)
#define vi vector<int>

int solveFunction()
{
    int n,n1,d=0;
    cin>>n;

    n1=n;
    while(n/10)
    {
        d++;
        n/=10;
    }
    
    int p=pow(10,d);

    int res=n1-p;
    cout<<res;

    return 0;
}

int main()
{
    fio;
    int t;
    cin>>t;
    while(t--){
        solveFunction();
        cout<<"\n";
    }
    return 0;
}