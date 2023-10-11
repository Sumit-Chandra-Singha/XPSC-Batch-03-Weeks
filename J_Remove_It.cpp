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
    ll n,x;
    cin >> n >> x;
    vi v;
    loop(i,0,n){
        ll x2;
        cin >> x2;
        if(x2!=x)
            v.push_back(x2);
    }
    for(int m: v)
        cout << m << " ";
    cout<<"\n";
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