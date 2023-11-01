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
    vector<pair<pair<int,string>,int>> s;
    ll a[n] = {0};
    //loop(i, 0, n) cout << a[i];
    loop(i, 0, n) {
        string ss;
        cin >> ss;
        pair<int,string> pr;
        pr.first = ss.size();
        pr.second = ss;
        s.push_back(pr);
    }
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    loop(i, 0, n)
    {
        loop(j, i, n)
        {
            loop(k, i, n)
            {
                if (i == j || i == k || a[i])
                    continue;
                else if (s[j] + s[k] == s[i])
                    a[i] = 1;
            }
        }
    }
    loop(i, 0, n) cout << a[i];
    cout<< "\n";
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