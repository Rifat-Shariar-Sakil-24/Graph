#include<bits/stdc++.h>
#define MAX  100001
using namespace std;

vector < vector <int> > v(MAX);
int vis[MAX]={0},dis[MAX]={0};

void dfs(int i)
{
 for(auto it:v[i])
        {
            if(vis[it]==0)
            {
                vis[it]=1;
                dis[it]=dis[i]+1;
                dfs(it);
            }
        }

}

int main()
{
    int n; cin >> n;///n=nodes;

    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i=1;i<=n;i++)
    {
        for(auto it:v[i])
        {
            vis[i]=1;
            dfs(i);
        }

    }

}

