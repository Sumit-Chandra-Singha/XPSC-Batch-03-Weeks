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
    string s1, s2;
    cin >> s1 >> s2;
    bool ans = true;
    loop(i,0,n){
        if(s1[i]!=s2[i]){
            if ((s1[i] == 'B' && s2[i] == 'R') || (s1[i]=='R' && s2[i]=='B')) { 
                ans = false;
                break;
            }
            else if((s1[i] == 'G' && s2[i] == 'R') || (s1[i]=='R' && s2[i]=='G')) { 
                ans = false;
                break;
            }
        }
    }
    if(ans)
        cout << "YES";
    else
        cout << "NO";
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