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
    ll k, s;
    cin >> k >> s;

    ll c = 0;
    for (int i = 0; i <= k; i++){
        for (int j = 0; j <= k; j++){
            if(s-i-j>=0 && s-i-j<=k)
                c++;
        }
    }

    cout << c << "\n";
    return 0;
}

int main()
{
    fio;
    // int t;
    // cin>>t;
    // while(t--)
        solveFunction();

    return 0;
}