#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"How many rows and columns:";
    int m,n;
    cin>>m>>n;
    int ar[m+1][n+1];
    int nar[m+1][n+1];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        cin>>ar[i][j];
    }
    nar[1][1]=ar[1][1];
    for(int j=2;j<=n;j++)
    {
       nar[1][j]=ar[1][j]+nar[1][j-1];
    }
    for(int i=2;i<=m;i++)
    {
        nar[i][1]=ar[i][1]+nar[i-1][1];
    }
    for(int i=2;i<=m;i++)
    {
        for(int j=2;j<=n;j++)
            nar[i][j]=nar[i-1][j]+nar[i][j-1]+ar[i][j]-nar[i-1][j-1];
    }
    cout<<"Resultant Array:"<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<nar[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
