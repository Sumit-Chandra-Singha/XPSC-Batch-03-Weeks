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
    ll n, q, v, es = 0, os = 0;
    cin >> n>>q;
    ll ev=0;
    ll od=0;
    loop(i,0,n){
        cin >> v;
        if(v%2){
            os += v;
            od++;
        }
        else{
            es += v;
            ev++;
        }
    }
    while(q--){
        ll o, x;
        cin >> o >> x;
        if(o){
            ll ans = (od * x) + es + os;
            if(x%2){
                ev += od;
                od = 0;
                es = ans;
                os = 0;
            }
            else
                os = ans-es;
            cout << ans;nl
        }
        else {
            ll ans = (ev * x) + es + os;
            if(x%2){
                od += ev;
                ev = 0;
                es = 0;
                os = ans;
            }
            else
                es = ans-os;
            cout << ans;nl
        }
    }

    //cout<<"\n";
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