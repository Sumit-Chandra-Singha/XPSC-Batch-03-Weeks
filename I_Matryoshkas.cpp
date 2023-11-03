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
    ll n,x;
    cin >> n;
    vector<int> a(n);
    map<int, int> cnt;
    set<int> b;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cnt[a[i]]++;
        b.insert(a[i]);
        b.insert(a[i] + 1);
    }
    int last = 0;
    int ans = 0;
    for (auto x: b) {
        int c = cnt[x];
        ans += max(0, c - last);
        last = c;
    }
    
    cout<<ans<<"\n";
    // vl v;
    // loop(i,0,n){
    //     cin >> x;
    //     v.push_back(x);
    // }
    // loop(i,0,n){
    //     cout<<v[i]<<" ";
    // }
    // nl;
    // sort(v.begin(), v.end());
    // loop(i,0,n){
    //     cout<<v[i]<<" ";
    // }
    // nl;

    // ll c=0,s=0;
    // ll a[n] = {0};
    // while(s!=v.size()){
        
    //     for(ll i=0; i<n-1; i++){
    //         //if(a[i]) continue;
    //         if(v[i]==v[i+1]-1) {
    //             a[i] = 1;
    //             s++;
    //             if(i+1==n)
    //                 s++;
    //             continue;
    //         }
    //         if (v[i] == v[i + 1])
    //         {
    //             continue;
    //         }
    //         else if (v[i] != v[i + 1] - 1)
    //         {
    //             a[i] = 1;
    //             s++;
    //             c++;
    //             break;
    //         }
    //     }
    // }

    
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