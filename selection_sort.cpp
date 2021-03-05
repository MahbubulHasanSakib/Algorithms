#include<iostream>
using namespace std;
int main()
{
   int n,a[20];
   cout<<"How many numbers:";
   cin>>n;
   cout<<"Enter the numbers:";
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int j=0;j<n-1;j++)
   {
       int minindex=j;
       for(int i=j+1;i<n;i++)
       {
           if(a[i]<a[minindex])
           {
               minindex=i;
           }
       }
       if(j!=minindex)
       {
           int temp=a[j];
           a[j]=a[minindex];
           a[minindex]=temp;
       }
   }
    for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   return 0;
}
