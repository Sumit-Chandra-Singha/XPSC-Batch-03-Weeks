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
    ll n,m,o,p,a,b,c,d,x,y,z,ans=0;
    string s,str,ss;
    cin >> s;
    set<char> st;
    loop(i,0,s.size()){
        st.insert(s[i]);
        if(st.size()>3){
            ans++;
            st.clear();
            st.insert(s[i]);
        }
    }
    if(!st.empty())
        ans++;

    cout<<ans<<"\n";
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