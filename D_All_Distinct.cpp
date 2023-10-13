#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define fio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)

int solveFunction()
{
    ll n;
    cin >> n;
    set<ll> s;
    loop(i,0,n) {
        ll x;
        cin >> x;
        s.insert(x);
    }
    
    if((n%2 && s.size()%2) || (n%2==0 && s.size()%2==0))
        cout << s.size() << "\n";
    else
        cout << s.size()-1 << endl;
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