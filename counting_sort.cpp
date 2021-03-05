#include<iostream>
using namespace std;
void countingsort(int a[],int size)
{
    int i;
    int b[size];
    int max=a[0];
    int min=a[0];
    for(int i=1; i<size; i++)
    {
        if(a[i]>max)
            max=a[i];

    }

    for(int i=1; i<size; i++)
    {
        if(a[i]<min)
            min=a[i];

    }
    int count[max+1];
    for(int i=min; i<=max; i++)
    {
        count[i]=0;
    }
    for(int i=0; i<size; i++)
    {
        ++count[a[i]];
    }
    for(int i=min+1; i<=max; i++)
    {
        count[i]+=count[i-1];

    }
    for(int i=size-1; i>=0; i--)
    {
        b[--count[a[i]]]=a[i];


    }
    for(int i=0; i<size; i++)
    {
        a[i]=b[i];

    }
}
int main()
{
    int n;
    cout<<"How many numbers:";
    cin>>n;
    int a[n];
    cout<<"Enter the numbers:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    countingsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
