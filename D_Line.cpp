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
    cin >> s;
    vector<pair<ll, ll>> v;
    for(ll i=0; i < n; i++){
        pair<ll, ll> pr;
        if(s[i]=='L'){
            pr.second = i;
        }
        else{
            pr.second = n - i - 1;
        }

        if(i>=n/2)
            pr.first = i;
        else
            pr.first = n - i-1;
        v.push_back(pr);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    vector<ll> v2;
    loop(i, 0, n) v2.push_back(v[i].second);
    // for(auto i: v){
    //     cout << i.first << " ";
    // }nl
    // for(auto i: v){
    //     cout << i.second << " ";
    // }nl
    
    ll sum = 0;
    for(auto i: v){
        sum+=i.second;
    }
    int j = 0;
    loop(i,0,n){
        if(v2[j]==v[j].first && j<n){
            j++;
            i--;
        }
        else if(j==n){
            cout << sum << " ";
        }
        else{
            sum += (v[j].first - v[j].second);
            j++;
            cout << sum << " ";
        }
        
    }

    cout<< "\n";
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