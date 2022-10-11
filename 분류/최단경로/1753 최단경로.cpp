#include <bits/stdc++.h>
using namespace std;

//1753 최단경로
//일반적인 다익스트라와 달리 단방향인점.
//단방향이라면 edge를 sort를 꼭 해줘야한다.

#define INF 1'000'000'000
#define MAX 20001
int dis[MAX];

void Func(const vector<vector<pair<int,int>>>& edges, int start)
{
    dis[start] = 0;

    priority_queue<pair<int,int>> pq;
    pq.push(make_pair(0, start));

    while (!pq.empty())
    {
        int cost = -pq.top().first;
        int now = pq.top().second;
        pq.pop();

        for (int i = 0; i < edges[now].size(); i++)
        {
            int next = edges[now][i].second;
            int nextcost = edges[now][i].first + cost;
            
            if (nextcost < dis[next])
            {
                dis[next] = nextcost;
                pq.push(make_pair(-nextcost, next));
            }
        }
        
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    fill_n(dis, sizeof(dis)/sizeof(int), INF);
    int V, E;
    cin >> V >> E;
    int start;
    cin >> start;
    
    vector<vector<pair<int, int>>> edges(V + 1, vector<pair<int, int>>());
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        
        edges[u].push_back(make_pair(w, v));
        //edges[v].push_back(make_pair(u, w));
    }
    
    for (int i = 0; i < V; i++)
    {
        sort(edges[i].begin(), edges[i].end());
    }

    Func(edges, start);

    for (int i = 1; i <= V; i++)
    {
        if (dis[i] == INF)
            cout << "INF" << endl;
        else
            cout << dis[i] << endl;
    }
    return 0;
    
}
