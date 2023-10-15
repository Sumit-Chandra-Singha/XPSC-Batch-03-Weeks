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
    ll n,m;
    cin >> n >> m;
    ll mat[n][m];
    ll sum[n][m];
    loop(i,0,n){
        loop(j,0,m){
            cin >> mat[i][j];
            sum[i][j] = 0;
        }
    }
    loop(i,0,n){
        loop(j,0,m){
            int ti = i, tj = j;
            while(ti<n && tj<m){
                sum[i][j] += mat[ti][tj];
                ti++, tj++;
            }
            ti = i-1, tj = j-1;
            while(ti>=0 && tj>=0){
                sum[i][j] += mat[ti][tj];
                ti--, tj--;
            }
            ti = i+1, tj = j-1;
            while(ti<n && tj>=0){
                sum[i][j] += mat[ti][tj];
                ti++, tj--;
            }
            ti = i-1, tj = j+1;
            while(ti>=0 && tj<m){
                sum[i][j] += mat[ti][tj];
                ti--, tj++;
            }
        }
    }
    ll ans = 0;
    loop(i,0,n){
        loop(j,0,m){
            ans = max(ans, sum[i][j]);
            //cout<< sum[i][j]<<" ";
        }
        //cout << endl;
    }


    cout<<ans<<"\n";
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