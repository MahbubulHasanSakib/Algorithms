#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cout<<"How many numbers:";
	cin>>n;
	int ar[n+1];
	cout<<"Enter the numbers:";
	int num;
	for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Enter expected sum:";
	cin>>num;
    int s=1;
    int e=n;
    int flag=0;
    while(s<e)
    {
        if(ar[s]+ar[e]==num)
        {
            cout<<"The sum of "<<s-1<<" and "<<e-1<<" indexed elements are "<<num<<endl;
            flag=1;
            break;
        }
        else if(ar[s]+ar[e]<num)
            s++;
        else  e--;
    }
    if(flag==0)
    {
        cout<<"No elements founds"<<endl;
    }
	return 0;
}
