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
    
    //cout << n;nl
    bool prime[3000]; 
    memset(prime, true, sizeof(prime));
    vector<int> pm;
    //cout << n;nl
    for (int p = 2;  p <= 3000; p++) { 
        if (prime[p] == true) {
            pm.push_back(p);
            for (int i = p * p; i <= 3000; i += p) 
                prime[i] = false; 
        } 
    }
    ll n;
    cin >> n;
    //cout << n;nl
    //loop(i, 0, pm.size()) cout << pm[i] << " ";
    int ans = 0;
    //cout << n;nl
    loop(i,2,n+1){
        //cout << "Loop1";nl
        int j = 0,pc=0,k=i;
        while(k>1 && j<pm.size()){
            //cout << "While1";nl
            if(pc>2)
                break;
            if(k%pm[j]==0){
                while(k % pm[j]==0){
                    //cout << "while2";nl
                    k /= pm[j];
                }
                pc++;
            }
            j++;
        }
        if(pc==2){
            //cout << "ANS";nl
            ans++;
        }
    }

    cout<<ans<<"\n";
    return 0;
}

int main()
{
    // fio;
    // int t;
    // cin>>t;
    // while(t--)
        solveFunction();

    return 0;
}