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
    int ans = 0;
    loop(i,n+1,10000){
        ll temp = i;
        int d1 = temp % 10;
        temp /= 10;
        int d2 = temp % 10;
        temp /= 10;
        int d3 = temp % 10;
        temp /= 10;
        int d4 = temp % 10;
        if (d1 != d2 && d2 != d3 && d3 != d4 && d1 != d3 && d2 != d4 && d1 != d4){
            ans = i;
            break;
        }
    }

    cout<< ans <<"\n";
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