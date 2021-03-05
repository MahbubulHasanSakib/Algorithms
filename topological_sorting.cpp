#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> >vp;
int nodes,edges,visited[10]={0};
int start[10]={0},last[10]={0};
vector<int>v[10];
int t=1;
void dfs_visit(int s)
{
    start[s]=t++;
    visited[s]=1;
    for(int i=0;i<v[s].size();i++)
    {
        if(visited[v[s][i]]==0)
            dfs_visit(v[s][i]);
    }
   last[s]=t++;
}
void dfs()
{
    for(int i=1;i<=nodes;i++)
    {
        if(visited[i]==0)
            dfs_visit(i);
    }
}
int main()
{
    //freopen("C:/Users/ASUS/Desktop/in.txt","r",stdin);
    int m,n;
    cout<<"How many nodes and edges:"<<endl;
    cin>>nodes>>edges;
    for(int i=1;i<=edges;i++)
    {
        cin>>m>>n;
        v[m].push_back(n);
    }
    dfs();
    for(int i=1;i<=nodes;i++)
    {
    vp.push_back(make_pair(last[i],i));
    }
    sort(vp.begin(),vp.end());
    reverse(vp.begin(),vp.end());
    for(int i=0;i<vp.size();i++)
    {
        cout<<vp[i].first<<" "<<vp[i].second<<'\n';
    }
    return 0;
}

//or

/*
#include<bits/stdc++.h>
using namespace std;
vector<int>v[10];
vector<int>res;
int n,e,visit[10]={0};
void dfs_visit(int s)
{
    visit[s]=1;
    for(int i=0;i<v[s].size();i++)
    {
        int nxt=v[s][i];
        if(visit[nxt]==0)
            dfs_visit(nxt);
    }
    res.push_back(s);
}
void dfs()
{
    for(int i=1;i<=n;i++)
    {
        if(visit[i]==0)
            dfs_visit(i);
    }
}
int main()
{
    cout<<"How many nodes and edges:";
    cin>>n>>e;
    int p,q;
    for(int i=1;i<=e;i++)
    {
        cin>>p>>q;
        v[p].push_back(q);
    }
    dfs();
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}

*/
















