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
    string n;
    cin >> n;
    ll sum = 0;
    loop(i,0,n.size()){
        sum += n[i] - 48;
    }
    //cout << sum << endl;
    int c = 0;
    if(sum==0 || (sum<10 && n.size()==1))
        c = 0;
    else if(sum<10 && n.size()!=1)
        c = 1;
    else{
        c = 1;
        while(sum>9){
            c++;
            ll temp = 0;
            while(sum/10){
                temp += sum % 10;
                sum /= 10;
            }
            temp += sum;
            sum = temp;
            //cout << sum << " ";
        }
    }
    

    cout<< c <<"\n";
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