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


int solveFunction()
{
    ll n,ans=0;
    cin >> n;
    ll a[n], b[n];


    loop(i, 0, n) cin >> a[i];
    loop(i, 0, n) cin >> b[i];

    loop(i, 0, n){
        ll t1 = 0, t2 = 0;
        t1 = a[i] * 2;
        t2 = b[i] * 2;
        if(a[i]<=t2 && b[i]<=t1){
            ans++;
        }
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