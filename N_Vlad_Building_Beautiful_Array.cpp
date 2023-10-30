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
    ll ev = 0, od = 0;
    ll mn = 1e9+5;
    loop(i,0,n){
        ll x;
        cin >> x;
        if(x%2)
            od++;
        else
            ev++;
        mn = min(x, mn);
    }
    if(ev==0 || od==0 || mn%2){
        cout << "YES";
    }
    else
        cout << "NO";
    cout<<"\n";
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