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
    ll n,s,r;
    cin >> n >> s >> r;
    ll le = s - r;
    ll ar[n] = {0};
    while(r){
        loop(i,0,n-1){
            if(r == 0) break;
            if(ar[i]==6)
                continue;
            ar[i]++;
            r--;
        }
    }
    ar[n - 1] = le;

    loop(i,0,n){
        cout << ar[i] << " ";
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