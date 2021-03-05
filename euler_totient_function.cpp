#include<bits/stdc++.h>
using namespace std;
int result(int n)
{
    float res=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;

            }
             res=res*(1.0-(1.0/(float)i));
        }
    }
    if(n>1)
         res=res*(1.0-(1.0/(float)n));
    return res;
}
int main()
{
    int n;
    for(n=1;n<=20;n++)
    cout<<"phi"<<"("<<n<<")="<<result(n)<<endl;
    return 0;
}
