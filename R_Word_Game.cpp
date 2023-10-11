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
    cin>>n;
    map<string, int> mp;
    string s[3][n];
    loop(i,0,3){
        loop(j,0,n){
            cin>>s[i][j];
            mp[s[i][j]]++;
        }
    }

    loop(i,0,3){
        int sum=0;
        loop(j,0,n){
            if(mp[s[i][j]]==1) sum+=3;
            else if(mp[s[i][j]]==2) sum+=1;
        }
        cout<<sum<<" ";
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