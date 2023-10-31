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

    int N, K;
    cin >> N >> K;
    int A[N];
    loop(i, 0, N) cin >> A[i];

    map<int, int> mp;
    int j = 0;
    int sum = 0;
    int ans = 0;
    while (j < N)
    {
        sum += A[j];
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = j;
        }
        if (sum == K)
        {
            ans = max(ans, j + 1);
        }
        else if (mp.find(sum - K) != mp.end())
        {
            int i = mp[sum - K];
            ans = max(ans, j - i);
        }
        j++;
    }
    cout<<ans;nl
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