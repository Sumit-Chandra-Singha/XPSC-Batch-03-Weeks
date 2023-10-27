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
    char ch[8][8];
    loop(i,0,8){
        loop(j,0,8){
            cin >> ch[i][j];
        }
    }
    loop(i,1,8-1){
        loop(j,1,8-1){
            if(ch[i][j]=='#'){
                if(ch[i-1][j-1]=='#' && ch[i-1][j+1]=='#' && ch[i+1][j-1]=='#' && ch[i+1][j+1]=='#'){
                    cout << i+1 << " " << j+1;
                    break;
                }
            }
        }
    }

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