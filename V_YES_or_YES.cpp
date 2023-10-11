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
    string s;
    cin >> s;
    int f = 1;
    string s1 = "YES", s2 = "yes";
    loop(i,0,3){
        if(s[i]!=s1[i] && s[i]!=s2[i]){
            f = 0;
            break;
        }
    }
    if(f)
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