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
    int a[n];
    int d = INT_MAX;
    
    loop(i,0,n){
        cin >> a[i];
    }
    loop(i,1,n){
        int d2=abs(a[i]-a[i-1]);
        d = min(d, d2);
    }

    cout<<d<<"\n";
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