// Relations between XOR and SUM of two numbers

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    ll u,v;
    cin>>u>>v;
    if(u==0 && v==0)
        cout<<0<<endl;
    else if(u>v || ((u^v)&1))
    {
        cout<<-1<<endl;
    }
    else if(u==v)
        cout<<1<<"\n"<<u<<endl;
    else
    {
        ll y = (v-u)/2;
        if((u^y)==(u+y))
            cout<<2<<"\n"<<u+y<<" "<<y<<endl;
        else
            cout<<3<<"\n"<<u<<" "<<y<<" "<<y<<endl;
    }
    
}
