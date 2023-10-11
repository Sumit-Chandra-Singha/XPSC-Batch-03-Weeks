#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    bool a[26];
    for(int i=0; i<26; i++) a[i]=true;
    for(int i=0; i<s.size(); i++) a[s[i]-'a']=false;
    int w=0;
    for(int i=0; i<26; i++) {
        if(a[i]==true) {
            char ch=97+i;
            cout<<ch;
            break;
        }
        w++;
    }
    if(w==26) cout<<"None\n";


    return 0;
}