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
    vector<string> s;
    loop(i,0,n){
        string ss;
        cin >> ss;
        s.push_back(ss);
    }
    ll count = 0;
    loop(i,0,n-1){
        string s1 = s[i];
        loop(j,i+1,n){
            string s2 = s[j];
            if((s1[0]==s2[0] && s1[1]!=s2[1]) || (s1[0]!=s2[0] && s1[1]==s2[1])){
                count++;
            }
        }
    }

    cout<<count<< "\n";
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