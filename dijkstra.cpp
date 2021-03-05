#include<bits/stdc++.h>
using namespace std;
#define MAX 110
#define inf 100000000
struct node
{
    int num;
    int cost;
};
vector<node>v[MAX];
int visit[MAX];
int dist[MAX];
class cmp
{
public:
    bool operator()(node &n1,node &n2)
    {
        if(n1.cost>n2.cost)
            return true;
        else return false;
    }
};
void dijkstra(int source)
{
    priority_queue<node,vector<node>,cmp>pq;
    pq.push({source,0});
    while(!pq.empty())
    {
        node temp=pq.top();
        pq.pop();
        int currnode=temp.num;
        int currcost=temp.cost;
        if(visit[currnode]==1)
            continue;
        dist[currnode]=currcost;
        visit[currnode]=1;
        for(int i=0;i<v[currnode].size();i++)
        {
            int nxtnode=v[currnode][i].num;
            int nxtcost=v[currnode][i].cost;
            if(visit[nxtnode]==0)
            pq.push({nxtnode,currcost+nxtcost});
        }
    }
}
int main()
{
    int n,e,tc;
    for(int i=0;i<MAX;i++)
    {
        visit[i]=0;
        dist[i]=inf;
    }
    cin>>tc;
    while(tc--){
    cout<<"Enter how many nodes and edges:";
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        int p,q,r;
        cin>>p>>q>>r;
        v[p].push_back({q,r});
    }
    int src;
    cout<<"Enter the source:";
    cin>>src;
    dijkstra(src);
    for(int i=1;i<=n;i++)
    {
        cout<<"The distance of "<<i<<" from source is "<<dist[i]<<'\n';
    }
       for(int i=1;i<=n;i++)
    {
        v[i].clear();
        visit[i]=0;
        dist[i]=inf;
    }
    }
    return 0;
}
