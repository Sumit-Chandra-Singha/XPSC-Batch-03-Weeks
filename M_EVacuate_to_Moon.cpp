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
    ll n,m,h;
    cin >> n>>m>>h;
    ll a[n];
    ll b[m];
    loop(i, 0, n) cin >> a[i];
    loop(i, 0, m) cin >> b[i];

    sort(a, a + n, greater<ll>());
    sort(b, b + m, greater<ll>());

    int l = min(m, n);
    ll sum = 0;
    // loop(i, 0, n) cout<< a[i];
    // loop(i, 0, n) cout<< b[i];
    for (int i = 0; i < l; i++){
        ll mn=min(a[i], b[i]);
        if(mn*h>a[i])
            sum += a[i];
        else
            sum += mn * h;
    }
    //if(sum*h>)
    cout << sum;

    cout << "\n";
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