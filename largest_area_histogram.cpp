#include<bits/stdc++.h>
using namespace std;
int largest_his(int hist[],int n)
{
    stack<int>s;
    int max_area=0;
    int current_area;
    for(int i=0; i<n; i++)
    {
        if(s.empty()==true || hist[i]>=hist[s.top()])
        {
            s.push(i);
        }
        else
        {
            int top=s.top();
            s.pop();
            if(s.empty())
                current_area=hist[top]*i;
            else
                current_area=hist[top]*(i-s.top()-1);
            if(current_area>max_area)
                max_area=current_area;
            i=i-1;
        }
    }
    while(s.empty()!=true)
    {
        int top=s.top();
        s.pop();
        if(s.empty())
            current_area=hist[top]*n;
        else
            current_area=hist[top]*(n-s.top()-1);
        if(current_area>max_area)
            max_area=current_area;
    }
    return max_area;
}
int main()
{
    int n;
    cout<<"How many pillars:";
    cin>>n;
    int hist[n];
    cout<<"Enter the height of the histogram:";
    for(int i=0; i<n; i++)
    {
        cin>>hist[i];
    }
    cout<<"The area of largest histogram is:"<<largest_his(hist,n)<<endl;
    return 0;
}
