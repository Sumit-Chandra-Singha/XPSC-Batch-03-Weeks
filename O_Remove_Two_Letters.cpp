// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef pair<int,int> pii;

// #define fio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// #define PB push_back
// #define MP make_pair
// #define loop(i,a,b) for(int i=a; i<b; i++)
// #define nl cout<<"\n";

// int solveFunction()
// {
//     ll n;
//     cin >> n;
//     string s;
//     cin >> s;
    

//     // set<string> st;
//     // string s1, s2;
//     // s1 = s.substr(2, n-1);
//     // st.insert(s1);

//     // for (int i = 0, j = 1; j < n - 2; j++)
//     // {
//     //     s1 = s.substr(i, j);
//     //     s2 = s.substr(j+2, n-1);
//     //     //cout << s1 << " " << s2;nl
//     //     st.insert(s1 + s2);
//     // }
//     // s1 = s.substr(0, n-2);
//     // st.insert(s1);
    
//     // cout<<st.size()<<"\n";
//     return 0;
// }

// int main()
// {
//     fio;
//     int t;
//     cin>>t;
//     while(t--)
//         solveFunction();

//     return 0;
// }
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = n - 1;
    for (int i = 1; i + 1 < n; ++i) {
        if (s[i - 1] == s[i + 1]) {
            res--;
        }
    }
    cout << res << '\n';
}

int main(int argc, char* argv[]) {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
}