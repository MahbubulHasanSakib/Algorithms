#include<bits/stdc++.h>
#define max 100
using namespace std;
vector<int>graph[max];
bool visited[max];
int dis[max];
void bfs(int source)
{
    queue<int>q;
    visited[source]=1;
    dis[source]=0;
    q.push(source);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(int i=0;i<graph[node].size();i++)
        {
            if(visited[graph[node][i]]==0)
            {
                visited[graph[node][i]]=1;
                dis[graph[node][i]]=dis[node]+1;
                q.push(graph[node][i]);
            }
        }
    }
}
int main()
{
   int n,e,i,u,v;
   cout<<"How many nodes and edges:";
   cin>>n>>e;
   for(i=0;i<e;i++)
   {
       cin>>u>>v;
       graph[u].push_back(v);
       graph[v].push_back(u);
   }
   bfs(1);
   for(int i=1;i<=n;i++)
   {
       cout<<"the distance of"<<i<<" from source:"<<dis[i]<<endl;
   }
   return 0;
}
