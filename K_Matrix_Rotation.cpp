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
    ll a,b,c,d;
    cin >> a >> b >> d >> c;
    ll ta=a, tb=b, tc=c, td=d;
    bool f = false;
    if(a<b && a<d && b<c && d<c){
        f = true;
    }
    else{
        loop(i,0,3){
            a = td, b = ta, c = tb, d = tc;
            // cout << a << " " << b;nl
            // cout << d << " " << c;nl
            if(a<b && a<d && b<c && d<c){
                f = true;
                break;
            }
            ta = a, tb = b, tc = c, td = d;
        }
    }
    if(f)
        cout << "YES";
    else
        cout << "NO";
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