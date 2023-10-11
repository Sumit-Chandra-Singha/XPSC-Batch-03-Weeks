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
    ll a[n + 1];
    a[0] = 0;
    ll cs[n+1];
    cs[0] = 0;
    loop(i,1,n+1){
        cin >> a[i];
        cs[i] = cs[i - 1] + a[i];
    }
    sort(a, a + n + 1);
    ll cs2[n + 1];
    cs2[0] = 0;
    loop(i,1,n+1){
        cs2[i] = cs2[i - 1] + a[i];
    }

    ll t;
    cin>>t;
    while(t--){
        ll t, i, j;
        cin >> t >> i >> j;
        if(t==1)
            cout << cs[j] - cs[i-1]<<endl;
        else
            cout << cs2[j] - cs2[i-1]<<endl;
        
    }

    cout<<"\n";
    return 0;
}

int main()
{
    fio;
    
        solveFunction();

    return 0;
}