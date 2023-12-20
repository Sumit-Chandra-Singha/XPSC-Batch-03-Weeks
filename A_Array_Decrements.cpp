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
// if(){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }

bool isprime(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solveFunction()
{
    ll n,m,o,p,a,b,c,d=0,x,y,z;
    string s,str,ss;
    cin >> n;
    ll ar[n], br[n];
    loop(i, 0, n) cin >> ar[i];
    loop(i, 0, n) cin >> br[i];

    loop(i, 0, n) {
        if(ar[i]<br[i]){
            cout << "NO\n";
            return 0;
        }
        d = max(d, ar[i] - br[i]);
    }
    loop(i, 0, n) {
        if(ar[i]-d<0)
            ar[i]=0;
        else
            ar[i] -= d;
    }

    loop(i, 0, n) {
        if(ar[i]!=br[i]) {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES" << "\n";
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