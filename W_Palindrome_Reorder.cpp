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
    cin >> s;
    int fr[26] = {0};
    loop(i, 0, s.size()){
        fr[s[i] - 'A']++;
    }
    int od = 0,odi=-1,oc=0;
    loop(i, 0, 26){
        if(fr[i]%2){
            odi = i;
            oc = max(oc, fr[i]);
            od++;
        }
    }
    if(od>1){
        cout << "NO SOLUTION";
    }
    else{
        if(od){
            int t = (oc - 1) / 2;
            while(t--){
                str += 'A'+odi;
            }
            for (int i = 0; i < 26;i++){
                if(i==odi)
                    continue;
                int t = fr[i] / 2;
                while (t--)
                {
                    str += 'A'+i;
                }
            }
            ss += str;
            ss += 'A'+odi;
            reverse(str.begin(), str.end());
            ss += str;
            cout << ss;
        }
        else{
            for (int i = 0; i < 26;i++){
                int t = fr[i] / 2;
                while (t--)
                {
                    str += 'A'+i;
                }
            }
            ss += str;
            reverse(str.begin(), str.end());
            ss += str;
            cout << ss;
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