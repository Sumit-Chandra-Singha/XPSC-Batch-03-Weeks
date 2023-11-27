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


int solveFunction()
{
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    loop(i, 0, n) {
        cin >> a[i];
        sum += abs(a[i]);
    }

    ll ans = 0;
    loop(i, 0, n)
    {
        // if(a[i]==0)
        //     continue;
        if (a[i] < 0)
        {
            ans++;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > 0)
                {
                    i = j;
                    break;
                }
                i = j+1;
            }
        }
    }

    cout<<sum<<" "<<ans<<"\n";
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