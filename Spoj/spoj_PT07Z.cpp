#include<bits/stdc++.h>
using namespace std;
vector<int>path[1000010];
int level[100010], vis[100010];
int mx, node;
void bfs(int start)
{
    queue<int>q;
    level[start]=0;
    q.push(start);
    vis[start]=1;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(int i=0;i<path[v].size();i++)
        {
            if(!vis[path[v][i]])
            {
                level[path[v][i]]=level[v]+1;
                if(level[path[v][i]]>mx){
                    mx=level[path[v][i]];
                    node=path[v][i];
                }
                vis[path[v][i]]=1;
                q.push(path[v][i]);

            }
        }
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    int n, e, n1, n2, i;  
    cin>>n;
    e=n-1;
    for(i=0;i<e;i++){
        cin>>n1>>n2;
        path[n1].push_back(n2);
        path[n2].push_back(n1);
    }
    mx=0;
    bfs(1);
    mx=0;
    memset(level, 0, sizeof(level));
    memset(vis, 0, sizeof(vis));
    bfs(node);
    cout<<mx<<endl;
    return 0;
}
