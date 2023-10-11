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
    ll cs[n+1];
    ll s;
    cin >> s;
    cs[0] = 0;
    cs[1] = s;
    loop(i,2,n+1){
        ll x;
        cin >> x;
        cs[i] = cs[i - 1] + x;
    }

    int t;
    cin>>t;
    while(t--){
        int i, j;
        cin >> i >> j;
        cout << cs[j+1] - cs[i]<<endl;
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