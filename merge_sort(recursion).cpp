#include<iostream>
using namespace std;
int a[20],n,b[20];
void Merge(int a[],int start,int mid,int End)
{
  int i=start;
  int j=mid+1;
  int k=start;
  while(i<=mid && j<=End)
  {
      if(a[i]<=a[j])
      {
          b[k]=a[i];
          i++;
      }
      else
      {
        b[k]=a[j];
        j++;
      }
      k++;
  }
  if(i>mid)
  {
      while(j<=End)
      {
          b[k]=a[j];
          j++;k++;
      }
  }
  else
  {
      while(i<=mid)
      {
          b[k]=a[i];
          i++;k++;
      }
  }
  for(int k=start;k<=End;k++)
  {
      a[k]=b[k];
  }
}
void mergesort(int a[],int start,int End)
{
    if(start<End){
    int mid=(start+End)/2;
    mergesort(a,start,mid);
    mergesort(a,mid+1,End);
    Merge(a,start,mid,End);
    }
}
int main()
{
    int i;
    cout<<"How many numbers:";
    cin>>n;
    cout<<"Enter the numbers:";
    for(i=0;i<n;i++)
    {
     cin>>a[i];
    }
    mergesort(a,0,n-1);
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
