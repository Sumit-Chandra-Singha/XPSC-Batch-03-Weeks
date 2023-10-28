#include <bits/stdc++.h>
using namespace std;

int solveFunction()
{
    int n,k,count=0,count2=0;
    cin>>n>>k;
    string s;
    cin>>s;

    int CAP[26]={0},sml[26]={0};
    sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            sml[s[i]-97]++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            CAP[s[i]-65]++;
        }
    }

    for(int i=0; i<26; i++){
        if(CAP[i]>=sml[i]){
            count+=sml[i];
            count2+=(CAP[i]-sml[i])/2;
        }
        else{
            count+=CAP[i];
            count2+=(sml[i]-CAP[i])/2;
        }
    }
    count+=min(count2,k);


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