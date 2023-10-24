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
    int a[n];
    vector<pair<int, char>> v;
    loop(i,0,n){
        cin >> a[i];
    }
    string s;
    cin >> s;
    loop(i,0,n){
        pair<int, char> pr;
        pr.first = a[i];
        pr.second = s[i];
        v.push_back(pr);
    }
    sort(v.begin(), v.end());

    int f = 1;
    loop(i,0,n-1){
        if(v[i].first==v[i+1].first && v[i].second!=v[i+1].second){
            f = 0;
            cout << "NO";
            break;
        }
    }
    if(f){
        cout << "YES";
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