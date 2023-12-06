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
    ll n,m,o,p,a,b,c,d,x,y,z;
    string s,str,ss;
    cin >> n;
    if(n>2){
        for(int i=1; i<=n;i++){
            
            for(int j=1; j<=i; j++){
                if(i==2 && j==1){
                    cout<<0;
                    continue;
                }
                cout<<1;
            }
            for(int j=1; j<=n-i; j++){
                cout<<0;
            }
            cout<<endl;
        }
    }
    else cout<<-1<<endl;

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