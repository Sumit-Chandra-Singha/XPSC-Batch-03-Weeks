#include <bits/stdc++.h>
using namespace std;

int solveFunction()
{
    long long n,count=0;
    cin>>n;
    long long arr[n];
    vector<long long> v;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        v.push_back(arr[i]);
        if(arr[i]==0){
            
            sort(v.begin(), v.end());
            int s=v.size();
           
            count+=v[s-1];
            v.pop_back();
        }
    }
    cout<<count;
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solveFunction();
        cout<<"\n";
    }
    return 0;
}