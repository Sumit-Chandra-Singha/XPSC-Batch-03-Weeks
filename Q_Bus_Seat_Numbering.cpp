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
    ll n;
    cin >> n;
    if(n<16){
        cout << "Lower ";
        if(n<11){
            cout << "Double";
        }
        else{
            cout << "Single";
        }
    }
    else{
        cout << "Upper ";
        if(n<26){
            cout << "Double";
        }
        else{
            cout << "Single";
        }
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