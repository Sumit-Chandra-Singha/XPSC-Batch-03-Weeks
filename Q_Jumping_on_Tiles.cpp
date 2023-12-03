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
// if(){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }


int solveFunction()
{
    string s;
    cin >> s;
    vector<int> v;
    ll cost = 0,m=0;

    if(s[0]>=s[s.size()-1]){
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i]<=s[0] && s[i]>=s[s.size()-1]){
                v.push_back(i);
                cost += s[i] - 'a' + 1;
                m++;
            }
        }
    }
    else{
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i]>=s[0] && s[i]<=s[s.size()-1]){
                v.push_back(i);
                cost += s[i] - 'a' + 1;
                m++;
            }
        }
    }
    sort(v.begin(), v.end());
    cout << cost << " " << m << endl;
    for (auto i: v){
        cout << i << " ";
    }

        cout << "\n";
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