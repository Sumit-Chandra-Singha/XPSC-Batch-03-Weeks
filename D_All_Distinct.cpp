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
    cin >> n;
    ll a[10005] = {0};
    
    loop(i,0,n) {
        ll x;
        cin >> x;
        a[x] = 1;
    }
    ll c = 0;
    loop(i,0,10005){
        if(a[i])
            c++;
    }
    if(n%2 && n>1)
        cout << c - 1 << "\n";
    else if (c==1 && n>1)
        cout << 0 << "\n";
    else
        cout << c << endl;
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