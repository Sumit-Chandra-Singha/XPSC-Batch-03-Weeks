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
    char c;
    cin >> c;
    string s;
    cin >> s;
    ll ans = 0,ans2=0;
    s += s;

    if(c!='g') {
        for (int i = n + n - 1; i >= 0; i--)
        {
            if (s[i] == 'g'){
                
                ans2 = i;
                
            }
            if(s[i]==c){
                ans = max(ans, ans2);
            }
        }
    }

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