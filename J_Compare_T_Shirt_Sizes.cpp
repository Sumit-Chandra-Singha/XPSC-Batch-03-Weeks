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
    string a,b;
    cin >> a>>b;
    string ss = "SLM";
    int sa = a.size();
    int sb = b.size();
    char la = a[sa - 1];
    char lb = b[sb - 1];
    if(a==b){
        cout << "=";
    }
    else if(sa==sb){
        if(la == lb){
            cout << "=";
        }
        else if(la=='S'){
            cout << "<";
        }
        else if(la=='M'){
            if(lb=='S')
                cout << ">";
            else
                cout << "<";
        }
        else if(la=='L'){
            cout << ">";
        }
    }
    else if(sa>sb){
        if(la == lb){
            if(lb=='S')
                cout << "<";
            else
                cout << ">";
        }
        else if(la=='S'){
            cout << "<";
        }
        else if(la=='M'){
            if(lb=='S')
                cout << ">";
            else
                cout << "<";
        }
        else if(la=='L'){
            cout << ">";
        }
    }
    else if(sa<sb){
        if(la == lb){
            if(lb=='S')
                cout << ">";
            else
                cout << "<";
        }
        else if(la=='S'){
            cout << "<";
        }
        else if(la=='M'){
            if(lb=='S')
                cout << ">";
            else
                cout << "<";
        }
        else if(la=='L'){
            cout << ">";
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