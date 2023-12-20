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
    ll n,m,o,p,as,b,c,d,f=1,x,y,z,ans=0;
    string s,str,ss;
    cin >> n;
    ll a[n];
    for (int i = 0; i <n; i++) cin >> a[i];

    for (int i = n - 1; i > 0; i--){
        while (a[i] <= a[i - 1] && a[i - 1] > 0)
        {
            a[i - 1] /= 2;
            ans++;
        }
        if(a[i]==a[i-1]){
            cout << -1;nl
            return 0;
        }
    }
    cout << ans << "\n";
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