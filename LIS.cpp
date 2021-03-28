#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+2],lis[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        lis[i]=1;
    }
    int i=2,j=1;
    while(i<=n)
    {
        if(a[i]>a[j])
            lis[i]=max(lis[i],lis[j]+1);
            if(j==i-1)
            {
                i++;
                j=1;
            }
            else j++;
    }
    cout<<*max_element(lis+1,lis+n+1)<<endl;
    return 0;
}
