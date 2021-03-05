#include<bits/stdc++.h>
#define max 35000
using namespace std;
bool isprime[max];
vector<int>primes;
void seive()
{
    for(int i=0;i<max;i++)
    {
       isprime[i]=true;
    }
    for(int j=3;j*j<max;j+=2)
    {
        for(int k=j*j;k<max;k+=j)
        {
            isprime[k]=false;
        }
    }
    primes.push_back(2);
    for(int i=3;i<max;i+=2)
    {
        if(isprime[i])
            primes.push_back(i);
    }
}
void segseive(long l,long r)
{
    bool seg[r-l+1];
    for(int i=0;i<r-l+1;i++)
    {
        seg[i]=true;
    }
    if(l==1)
        seg[0]=false;
    for(int j=0;primes[j]*primes[j]<=r;j++)
    {
        int curprime=primes[j];
        int base=(l/curprime)*curprime;
        if(base<l)
            base+=curprime;
        for(int m=base;m<=r;m+=curprime)
        {
            seg[m-l]=false;
        }
        if(base==curprime)
        seg[base-l]=true;
    }
    for(int i=0;i<r-l+1;i++)
    {
        if(seg[i]==true)
            cout<<(l+i)<<endl;
    }
}
int main()
{
    seive();
    long t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        segseive(l,r);
    }
    return 0;
}
