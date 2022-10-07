#include <bits/stdc++.h>
using namespace std;

//1916 최소비용구하기
//priority queue를 이용한 다익스트라로 해결.

#define INF 1'000'000'000
#define MAX 1000
int dist[200001];

void Func(int start, vector<vector<pair<int,int>>>& costv)
{
    dist[start] = 0;
    
    priority_queue<pair<int, int>> pq; // pair<cost, to>
    pq.push(make_pair(0, start));
    
    while (!pq.empty())
    {
        int cost = -pq.top().first;
        int now = pq.top().second;
        pq.pop();
        
        for (int i = 0; i < costv[now].size(); i++)
        {
            int nextCost = cost + costv[now][i].first;
            int next = costv[now][i].second;
            if (nextCost < dist[next])
            {
                dist[next] = nextCost;
                pq.push(make_pair(-nextCost, next));
                //cout << "now : " << now << endl << "next : " << next << endl << "dist : " << dist[next] << endl << endl;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    fill_n(dist, sizeof(dist)/sizeof(int), INF);

    int N, E;
    cin >> N >> E;
    vector<vector<pair<int,int>>> costv(N+1, vector<pair<int,int>>());
    map<pair<int,int>, int> m; // 이미 삽입되었는지 확인하기위한 map
    for (int i = 0; i < E; i++)
    {
        int from, to, cost;
        cin >> from >> to >> cost;
        
        costv[from].push_back(make_pair(cost, to));
        //costv[to].push_back(make_pair(from, cost));
    }

    //1 2 5 , 1 2 10 같은 같은 정점에 대해 다른 코스트가 들어온다면 priority queue에서 중복 삽입이 일어나 시간초과가 된다.
    //이를 해결하기위한 sort.
    for (int i = 0; i < costv.size(); i++)
    {
        sort(costv[i].begin(), costv[i].end());
    }
    
    int v1, v2;
    cin >> v1 >> v2;
    Func(v1, costv);
    
    cout << dist[v2];
    return 0;
}
