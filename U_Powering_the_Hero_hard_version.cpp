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
    ll n,x,count=0;
    cin>>n;
    ll arr[n];

    priority_queue<ll> pq;

    loop(i,0,n){
        cin>>x;
        pq.push(x);
        if(x==0){
            count+=pq.top();
            pq.pop();
        }
    }
    cout<<count;
    return 0;
}

int main()
{
    fio;
    int t;
    cin>>t;
    while(t--){
        solveFunction();
        cout<<"\n";
    }
    return 0;
}