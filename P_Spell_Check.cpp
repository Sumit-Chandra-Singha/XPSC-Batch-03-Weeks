#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define fio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)

int solveFunction2()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string s2 = "Timur";

    sort(s.begin(), s.end());
    sort(s2.begin(), s2.end());
    if(s==s2)
        cout << "YES";
    else
        cout << "NO";
    cout<<endl;
    return 0;
}

int solveFunction()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool ans = false;
    if(n==5){
        bool i=false, j=false, k=false, l=false, m=false;
        loop(o,0,5){
            if(s[o]=='T')
                i = true;
            else if(s[o]=='i')
                j = true;
            else if(s[o]=='m')
                k = true;
            else if(s[o]=='u')
                l = true;
            else if(s[o]=='r')
                m = true;
        }
        if(i && j && k && l && m)
            ans = true;
    }
    if(ans)
        cout << "YES";
    else
        cout << "NO";
    cout<< "\n";
    return 0;
}

int main()
{
    fio;
    int t;
    cin>>t;
    while(t--)
        //solveFunction();
        solveFunction2();

    return 0;
}