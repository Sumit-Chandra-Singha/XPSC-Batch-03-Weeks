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
    ll x = 0;
    loop(i,0,n){
        ll a;
        cin >> a;
        x = x ^ a;
    }
    if(n%2==0){
        if(x==0){
            cout << 0;nl
        }
        else{
            cout << -1;nl
        }
    }
    else{
        cout << x;nl
    }

    //cout<<"\n";
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