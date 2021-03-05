#include<iostream>
using namespace std;
int a[20];
int Partition(int a[],int z,int b)
{
    int temp;
    int r=a[b];
    int k=z-1;
    for(int p=z; p<=b-1; p++)
    {
        if(a[p]<=r)
        {
            k++;
            temp=a[k];
            a[k]=a[p];
            a[p]=temp;
        }
    }
    temp=a[k+1];
    a[k+1]=a[b];
    a[b]=temp;
    return k+1;
}
void quicksort(int a[],int i,int j)
{
    int q;
    if(i<j){
    q=Partition(a,i,j);
    quicksort(a,i,q-1);
    quicksort(a,q+1,j);
    }
}
int main()
{
    int n;
    cout<<"how many numbers:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
