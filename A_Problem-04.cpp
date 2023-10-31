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
    string S;
    cin >> S;
    int i=0, j=0, n=S.size();
    int fr[26]={0};
    int ans=0;
    while(j<n){
        if(fr[S[j]-'a']==1){
            while(1){
                fr[S[i]-'a']=0;
                i++;
                if(S[i-1]==S[j])
                    break;
            }
        }
        fr[S[j]-'a']=1;
        ans = max(ans, j-i+1);
        j++;
    }

    cout<<ans<<"\n";
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