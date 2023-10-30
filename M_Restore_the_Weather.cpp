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
    ll n,k;
    cin >> n>>k;
    vector<pair<ll, int>> a;
    vector<ll> b;
    ll ans[n];
    loop(i,0,n){
        pair<ll, int> pr;
        ll x;
        cin >> x;
        pr.first=x;
        pr.second=i;
        a.push_back(pr);
    }
    loop(i,0,n){
        ll x;
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    loop(i,0,n){
        pair<ll, int> pr = a[i];
        int j = pr.second;
        ans[j] = b[i];
    }
    loop(i,0,n){
        cout << ans[i] << " ";
    }

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