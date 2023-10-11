#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll MOD=1e9+7;
const ll N=1e6+5;

ll a[N];
  


int main()
{
    string s;
    cin>>s;

    ll ans=0;
    ll size=s.size();
    int cnt[26]={0};
    for(int i=0;i<size;i++)
    {
        cnt[s[i]-'a']++;
    }

   

    while(size)
    {
         int cntt=0;
         for(int j=0;j<size-1;j++)
        {
            if(s[j]==s[j+1])
            {
                cnt[s[j]-'a']--;
                cnt[s[j+1]-'a']--;
                ans++;
                size-=2;
                for(int k=j;k<size;k++)
                {
                    s[k]=s[k+2];
                }
            }
           // cout<<s<<" "<<size<<" "<<ans<<endl;
        }

        for(int i=0;i<26;i++)
        {
            if(cnt[i]>=2)
            {
                cntt++;
            }
        }

        if(cntt==0)
        {
            break;
        }
    
    }
       

    cout<<ans%MOD<<endl;
}