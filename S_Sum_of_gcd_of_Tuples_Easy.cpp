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
    ll sum = 0;
    loop(i,1,n+1){
        loop(j,1,n+1){
            loop(k,1,n+1){
                sum += __gcd(__gcd(i, j), k);
            }
        }
    }

    cout<<sum<<"\n";
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