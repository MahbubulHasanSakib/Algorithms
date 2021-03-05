#include<iostream>
#include<math.h>
using namespace std;
int a[10],n,heapsize;
void maxheapify(int a[],int p)
{
    int largest,temp;
    int l=2*p;
    int r=(2*p)+1;
    if(l<=heapsize && a[l]>a[p])
    {
        largest=l;
    }
    else
        largest=p;
    if(r<=heapsize && a[r]>a[largest])
    {
        largest=r;
    }
    if(largest!=p)
    {
        temp=a[p];
        a[p]=a[largest];
        a[largest]=temp;
        maxheapify(a,largest);
    }
}
void heapsort(int a[],int n)
{
    int temp;
    heapsize=n;
    for(int i=n/2;i>=1;i--)
    {
        maxheapify(a,i);
    }
    for(int j=n;j>=1;j--)
    {
        temp=a[1];
        a[1]=a[j];
        a[j]=temp;
        heapsize--;
        maxheapify(a,1);
    }
}
int main()
{
    cout<<"how many numbers:";
    cin>>n;
    cout<<"Enter the numbers:";
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    heapsort(a,n);
    for(int i=1;i<=n;i++)
    {
       cout<<a[i]<<" ";
    }
    return 0;
}
