#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;

#define fio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define nl cout<<"\n";



int solveFunction()
{
    ll n;
    cin >> n;
    ll ans = 0;

    while(1){
        if(n==50)
            break;
        if(n<50)
            n += 2;
        else
            n -= 3;
        ans++;
    }

    cout<<ans<<"\n";
    return 0;
}

int main()
{
    fio;
    int t;
    cin>>t;
    while(t--)
        solveFunction();

    return 0;
}