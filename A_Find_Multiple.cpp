#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int i=a/c;

    while(1){
        if(i*c>=a && i*c<=b) {
            cout<<i*c<<endl;
            break;
        }
        else if(i*c>b) {
            cout<<-1<<endl;
            break;
        }
        else i++;
    }

    return 0;
}