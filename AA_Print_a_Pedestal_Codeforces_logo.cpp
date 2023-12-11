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
    for (int a = 3; a < n; a++) {
        int c = (n - a) / 2;
        int b = n - a - c;
        if (c > 1 && b+1 < a) {
            c--;
            b++;
        }
        if (a > b && b > c) {
            cout << b << ' ' << a << ' ' << c;
            break;
        }
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