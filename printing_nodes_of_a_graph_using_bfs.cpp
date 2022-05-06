#include <bits/stdc++.h>
using namespace std;
void bfs(int j,vector<int>&v,vector<int>adj[])
{
    queue<int>q;
    q.push(j);
    v[j]=1;
    while(!q.empty())
    {
        j=q.front();
        q.pop();
        cout<<j<<" ";
        for(auto it:adj[j])
        {
            if(!v[it])
            {
                q.push(it);
                v[it]=1;
            }
        }
        
    }
}

int main() {
	int n,m;
	cin>>n>>m;
	vector<int>adj[n+1];
	int u,v1;
	for(int i=0;i<n;i++)
	{
	    cin>>u>>v1;
	    adj[u].push_back(v1);
	    adj[v1].push_back(u);
	}
	vector<int>v(n+1);
	for(int i=1;i<=n;i++)
	{
	    if(!v[i])
	    {
	        bfs(i,v,adj);
	    }
	}
	return 0;
}
