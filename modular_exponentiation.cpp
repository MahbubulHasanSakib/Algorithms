#include<iostream>
using namespace std;
typedef long long ll;
ll modular_exp(ll a,ll b,ll p)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=(res*a)%p;
        }
        a=(a*a)%p;
        b=b>>1;
    }
    return res;
}
int main()
{
    ll a,b,p;
    cout<<"Enter a,b,m:";
    cin>>a>>b>>p;
    cout<<"The result is:"<<modular_exp(a,b,p)<<endl;
    return 0;
}
