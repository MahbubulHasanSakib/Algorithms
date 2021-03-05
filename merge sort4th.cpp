#include<iostream>
using namespace std;
int New[40];
int merge (int New[],int left[],int right[],int n1,int n2)
{
    int i,j,k;
    i=1;j=1;k=1;
    while(i<=n1 && j<=n2)
    {
        if(left[i]<=right[j])
        {
            New[k]=left[i];
            i++;
        }
        else
        {
            New[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<=n1)
    {
        New[k]=left[i];
        i++;k++;
    }
    while(j<=n2)
    {
        New[k]=right[j];
        j++;k++;
    }
    return k;
}
int main()
{
    int left[20],right[20],i,j,n1,n2,key;
    cout<<"Element of first array:";
    cin>>n1;
    for(i=1;i<=n1;i++)
    {
        cin>>left[i];
    }
    for(i=2;i<=n1;i++){
        key=left[i];
        j=i-1;
    while(j>0 && left[j]>key)
    {
        left[j+1]=left[j];
        j--;
    }

    left[j+1]=key;
    }
cout<<"Element of second array:";
cin>>n2;
for(i=1;i<=n2;i++)
{
    cin>>right[i];
}
for(i=2;i<=n2;i++)
{
    key=right[i];
    j=i-1;
    while(j>0 && right[j]>key)
    {
        right[j+1]=right[j];
        j--;
    }
    right[j+1]=key;
}
int m=merge(New,left,right,n1,n2);
for(i=1;i<=m-1;i++)
{
    cout<<New[i]<<" ";
}
return 0;
}
