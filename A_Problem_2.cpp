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
    ll n,k;
    cin>>n>>k;
    int ar[n];
    loop(i,0,n) cin>>ar[i];
    vector<ll> v;
    for(int i=0; i<=n-k; i++){
        int N=0;
        for(int j=i; j<i+k; j++){
            if(ar[j]<0){
                N=ar[j];
                break;
            }
        }
        v.push_back(N);
    }
    loop(i,0,v.size()) cout<<v[i]<<" ";

    cout<<"\n";
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