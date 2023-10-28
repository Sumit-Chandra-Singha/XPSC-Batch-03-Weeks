#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int srcFw(int i){
    while(1){

        if(s[i]=='w' || s[i]=='W'){
            i++;
        }
        else if(s[i]=='\0'){
            cout<<"YES";
            break;
        }
        else{
            cout<<"NO";
            break;
        }
    }
    return 0;
}
int srcFoO(int i){
    for(i; i<=s.size(); i++){
        if(s[i]=='o' || s[i]=='O'){
            continue;
        }
        else if(s[i]=='w' || s[i]=='W'){
            srcFw(i);
            break;
        }
        else if(s[i]=='\0'){
            cout<<"NO";
            break;
        }
        else{
            cout<<"NO";
            break;
        }
    }
    return 0;
}
int srcFeE(int i){
    for(i; i<=s.size(); i++){
        if(s[i]=='e' || s[i]=='E'){
            continue;
        }
        else if(s[i]=='o' || s[i]=='O'){
            srcFoO(i);
            break;
        }
        else if(s[i]=='\0'){
            cout<<"NO";
            break;
        }
        else{
            cout<<"NO";
            break;
        }
    }
    return 0;
}
int solveFunction()
{

    cin >>n>>s;

    if(s[0]=='m' || s[0]=='M'){

    for(int i=1; i<=s.size(); i++){
        char c1,c2;
        c1='m'; c2='M';

        if(s[i]==c1 || s[i]==c2){
            continue;
        }
        else if(s[i]=='e' || s[i]=='E'){
            srcFeE(i);
            break;
        }
        else if(s[i]=='\0'){
            cout<<"NO";
            break;
        }
        else{
            cout<<"NO";
            break;
        }
      }
    }
    else{
        cout<<"NO";
    }
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