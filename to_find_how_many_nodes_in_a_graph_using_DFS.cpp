#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>&visited,vector<int>adj[])
{
    cout<<node<<" ";
    visited[node]=1;
    for(auto it:adj[node])
    {
        if(!visited[it])
        {
            dfs(it,visited,adj);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    //int adj[n+1][n+1];
    int u,v;
    // for(int i=0;i<e;i++)
    // {
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    // }
    vector<int>ad[n+1];
    for(int i=0;i<e;i++)
    {
        cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    vector<int>visited(n+1);
    dfs(1,visited,ad);
}
