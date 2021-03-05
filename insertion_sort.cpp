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
   for(int j=1;j<n;j++)
   {
       int key=a[j];
       int k=j-1;
       while(k>=0 && a[k]>key)
       {
           a[k+1]=a[k];
           k--;
       }
       a[k+1]=key;
   }
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   return 0;
}
