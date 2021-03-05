#include<iostream>
#define Min -1000000;
using namespace std;
int main()
{
    int a[10],start,s=0,last,i,j,n,max_end_here=0,max_so_far=Min;
    cout<<"How many numbers:";
    cin>>n;
    cout<<"Enter the numbers:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        max_end_here=max_end_here+a[i];
        if(max_end_here>max_so_far)
        {
            max_so_far=max_end_here;
            start=s;
            last=i;
        }
        if(max_end_here<0)
        {
            max_end_here=0;
            s=i+1;
        }
    }
    cout<<"The maximum sum is:"<<max_so_far<<endl;
    cout<<"start_index:"<<start<<" "<<"end_index:"<<last<<endl;
    return 0;

}
