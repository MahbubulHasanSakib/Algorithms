#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool isprime[n+1];
    for(int i=0;i<n+1;i++)
        isprime[i]=true;
    for(int j=2;j*j<n+1;j++)
    {
        if(isprime[j]){
        for(int k=j*j;k<n+1;k=k+j)
        isprime[k]=false;
        }
    }
    isprime[0]=false;
    isprime[1]=false;
    for(int i=0;i<n+1;i++)
    {
        if(isprime[i])
            cout<<i<<endl;

    }
    return 0;
}
