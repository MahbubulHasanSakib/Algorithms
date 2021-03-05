#include<iostream>
using namespace std;
int prime_factor(int n)
{
    for(int p=2;p*p<=n;p++)
    {
        if(n%p==0)
        {
            while(n%p==0)
            {
                cout<<p<<" ";
                n=n/p;
            }
        }
    }
  if(n>1)
    cout<<n<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    prime_factor(n);
    return 0;
}
