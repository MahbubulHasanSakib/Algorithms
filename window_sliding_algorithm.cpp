#include<bits/stdc++.h>
using namespace std;
int max_sum(int arr[],int n,int k)
{
    int wsum=0,mxsum=INT_MIN;
    for(int i=0;i<k;i++)
    {
        wsum=wsum+arr[i];
    }
    mxsum=max(wsum,mxsum);
    for(int nxt=k;nxt<n;nxt++)
    {
        wsum=wsum+arr[nxt]-arr[nxt-k];
        mxsum=max(wsum,mxsum);
    }
    return mxsum;
}
int main()
{
    int n,k;
    cout<<"How many numbers:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter k:";
    cin>>k;
    cout<<"maximum sum is :"<<max_sum(arr,n,k)<<endl;
    return 0;
}
