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
    ll a,b,c;
    cin >> a>>b>>c;
    ll ans = 0;
    if(a==1)
        ans++;
    if(b==1)
        ans++;
    if(c==1)
        ans++;
    if(ans>=2)
        cout << "Not now";
    else
        cout << "Water filling time";

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