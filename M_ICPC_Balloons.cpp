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
    int a[26]={0};
    string s;cin>>s;
    
    loop(i,0,n){
        if(a[s[i]-'A']==0){
            a[s[i]-'A']=2;
        }
        else a[s[i]-'A']+=1;
    }
    
    int c=0;
    loop(i,0,26){
        c+=a[i];
    }

    cout<<c<<"\n";
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