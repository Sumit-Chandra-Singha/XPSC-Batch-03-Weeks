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
    ll n,m;
    cin >> n>>m;
    ll ans = 100 -n;
    ll ans2 = 200 - m * 2;
    if(ans>ans2){
        cout << "SECOND";
    }
    else if(ans==ans2){
        cout << "BOTH";
    }
    else{
        cout << "FIRST";
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