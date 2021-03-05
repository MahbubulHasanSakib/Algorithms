#include<bits/stdc++.h>
using namespace std;
vector<int>v[10];
bool visit[10];
int dist[10];
void dfs(int s,int d)
{
    visit[s]=1;
    dist[s]=d;
    for( int i=0; i<v[s].size(); i++)
    {
        if(visit[v[s][i]]==0)
            dfs(v[s][i],dist[s]+1);
    }
}
int main()
{
    int n,a,b;
    cin>>n;
    for(int i=1; i<n; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1,0);
    for(int i=1; i<=n; i++)
    {
        cout<<visit[i]<<" "<<dist[i]<<endl;
    }
    /*if(visit[m]==1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;*/
    return 0;
}

//or

/*
#include<bits/stdc++.h>
using namespace std;
int n,e,c=0;
int visit[6]={0};
vector<int>v[6];
void dfs_visit(int src)
{
    visit[src]=1;
    for(int i=0;i<v[src].size();i++)
    {
        int nxt=v[src][i];
        if(visit[nxt]==0)
            dfs_visit(nxt);
    }
}
void dfs()
{
    for(int i=0;i<n;i++)
    {
        if(visit[i]==0){
                c++;
            dfs_visit(i);
        }
    }
}
int main()
{
    int m,p;
    cout<<"Enter how many nodes and edges:";
    cin>>n>>e;
    cout<<"Enter the edges:"<<'\n';
    for(int i=1;i<=e;i++)
    {
        cin>>m>>p;
        v[m].push_back(p);
        v[p].push_back(m);
    }
    dfs();
    cout<<c<<" connected graphs are here"<<'\n';
    for(int i=0;i<n;i++)
    {
        if(visit[i]==1)
            cout<<i<<" is visited"<<'\n';
        else cout<<i<<" is not visited"<<'\n';
    }
    return 0;
}

*/
