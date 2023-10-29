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
    string s;
    vector<string> ss;
    cin >>s;
    //cout << s;nl

    loop(i,0,n-1){
        string s1;
        s1 += s[i]; 
        s1 += s[i + 1];
        //cout << s1 << " ";
        ss.push_back(s1);
    }
    sort(ss.begin(), ss.end());
    loop(i, 0, ss.size()) {
        string s1 = ss[i];
        //cout << s1 << " ";
    }
    //nl
    ll c = 0;
    loop(i, 1, ss.size()){
        string s1 = ss[i];
        string s2 = ss[i - 1];
        //cout << s1 << " " << s2;nl
        if(s1!=s2)
            c++;
    }
    

    cout<<++c<<"\n";
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