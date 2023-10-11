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
    ll n;
    

    cout<<"\n";
    return 0;
}

int main()
{
    int N, K;
    cin >> N >> K;

    int a[N];
    for (int i = 0; i < N; i++)
        cin >> a[i];

    long ans, sum = 0;
    for (int i = 0; i < K; i++)
    {
        sum += a[i];
    }
    ans = sum;
    for (int i = K; i < N; i++)
    {
        sum = sum + a[i] - a[i - K];
        ans = max(sum, ans);
    }

    cout << ans << endl;
}