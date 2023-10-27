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
    ll n,c;
    cin >> n>>c;
    vector<string> s;
    loop(i,0,n){
        string x;
        cin >> x;
        s.push_back(x);
    }
    sort(s.begin(), s.end());
    //loop(i, 0, n) cout << s[i];nl

    string s1 = s[0];
    string s2 = s[1];
    int ans= 0;
    loop(j, 0, c)
    {
        ans += abs(abs(s2[j] - 'a') - abs(s1[j] - 'a'));
    }

    loop(i,0,n){
        
        loop(k,i+1,n){
            string ss = s[i];
            string t = s[k];
            int ans2 = 0;
            loop(j, 0, c)
            {
                ans2 += abs(abs(t[j] - 'a') - abs(ss[j] - 'a'));
            }
            if(ans2<ans){
                ans = ans2;
                s1 = s[i];
                s2 = s[k];
            }
        }
        
    }
    ans = 0;
    loop(j, 0, c)
    {
        ans += abs(abs(s2[j] - 'a') - abs(s1[j] - 'a'));
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