#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c;
        int e=a-1;
        if(b<c){
            d=2*c-b-1;
        }
        else{
            d=b-1;
        }
        if(e>d){
            cout<<2<<endl;
        }
        else if(d>e){
            cout<<1<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
    return 0;
}
