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
    int a[n],mx=0;
    loop(i,0,n){
        cin >> a[i];
        mx = max(a[i], mx);
    }
    sort(a, a + n);
    int mc = 0,ans=0;
    loop(i, 2, mx+1){
        int gc = 0;
        loop(j,0,n){
            if(a[j]%i==0){
                gc++;
            }
        }
        if(gc>mc){
            ans = i;
        }
        mc = max(mc, gc);
    }

    cout<<ans<< "\n";
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