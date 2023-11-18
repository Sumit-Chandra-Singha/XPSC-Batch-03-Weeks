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
    string s;
    map<string, int> mp;
    vector<string> v;
    loop(i,0,n){
        cin >> s;
        mp[s] = 0;
        v.push_back(s);
    }
    for (int i = n - 1; i >= 0; i--){
        if(mp[v[i]]==0){
            string ss = v[i];
            cout << ss[ss.size() - 2] << ss[ss.size() - 1];
            mp[v[i]] = 1;
        }
    }

    cout << "\n";
    return 0;
}

int main()
{
    fio;
    // int t;
    // cin>>t;
    // while(t--)
        solveFunction();

    return 0;
}