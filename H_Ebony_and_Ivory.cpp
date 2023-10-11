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
    ll a, b, c;
    cin >> a >> b >> c;

    if (a == 1 || b == 1 || a == c || b == c)
    {
        cout << "Yes\n";
    }
    else{
        bool f = 0;
        int x = min(a, b);

        for (int i = 0; i <= c / x; i++)
        {
            for (int j = 0; j <= c / x; j++)
            {
                if ((a * i) + (b * j) == c)
                {
                    f = 1;
                }
            }
        }

        if (f)
            cout << "Yes";
        else
            cout << "No";
    }

    cout<<"\n";
    return 0;
}

int main()
{
    fio;
    // int t;
    // cin>>t;
    // while(t--)
        solveFunction();

    return 0;
}