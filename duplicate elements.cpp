#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N,i;
   int c=0;
   int cnt[100]={0};
   int T[100];
   while(1)
   {
       cin>>N;
       if(N==0)
        break;
        int max=0;
       for( i=0;i<N;i++)
       {
           cin>>T[i];
           cnt[T[i]]++;
           if(T[i]>max)
            max=T[i];
       }
       for(i=0;i<=max;i++)
       {
           if(cnt[i]>1)
           {
               c++;
           }
       }
       if(c==0)
        cout<<"No duplicate elements"<<endl;
       if(c!=0){
       cout<<"duplicate elements:";
       int s=1;
        for(i=0;i<=max;i++)
       {
           if(cnt[i]>1)
           {
               if(s==c)
               cout<<i<<endl;
               else if(s<c)
                cout<<i<<",";
               s++;
           }
       }
       for(i=0;i<=max;i++)
       {
           if(cnt[i]>1)
           {
               cout<<i<<"->"<<cnt[i]<<"times"<<endl;
           }
       }
       }
       int j;
        for(j=0;j<=100;j++)
        {
            cnt[j]=0;
        }
       c=0;
   }
    return 0;
}
