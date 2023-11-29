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
#define pool(i,a,b) for(int i=a-1; i>=b; i--)
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

    ll ans = 0;
    vector<int> v;

    if(n>9){
        int i = 9;
        int j = 0;
        while(j!=n && i>0){
            j += i;
            v.push_back(i);
            
            if(n-j<10 && n-j<i){
                v.push_back(n-j);
                break;
            }i--;
        }
    }
    else
        v.push_back(n);
    pool(i,v.size(),0){
        cout << v[i];
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