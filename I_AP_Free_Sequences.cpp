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
// if(){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }

bool isprime(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solveFunction()
{
    ll n, m, o, p, a, b, c, d,f=1;
    char x, y, z;
    string s,str,ss;
    cin >> n;
    vector<ll> v(n);
    loop(i, 0, n) {
        cin >> v[i];
    }
    
    for(ll i=0;i<n-2;i++){
        for (ll j = i+1; j < n-1;j++){
            for (ll k = j+1; k < n; k++)
            {
                if (v[j]-v[i] == v[k]-v[j])
                {
                    cout << "No\n";
                    return 0;
                }
            }
        }
    }
    if(f){
        cout << "Yes";
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