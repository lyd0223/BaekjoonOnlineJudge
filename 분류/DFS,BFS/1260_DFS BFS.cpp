#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> vec[1001];
vector<int> temp;
int visit[1001];

void dfs(int start)
{
	visit[start] = 1;
	cout << start << " ";
	for (int i = 0; i < vec[start].size(); i++)
	{
		if (!visit[vec[start][i]])
		{
			dfs(vec[start][i]);
		}
	}
	
};
void bfs(int start)
{
	for (int i = 0; i < 1001; i++)
	{
		visit[i] = 0;
	}
	queue<int> q;
	q.push(start);
	visit[start] = 1;
	
	while (!q.empty())
	{
		cout << q.front() << " ";
		for (int i = 0; i < vec[q.front()].size(); i++)
		{
			if (!visit[vec[q.front()][i]])
			{
				q.push(vec[q.front()][i]);
				visit[vec[q.front()][i]] = 1;
			}
			
		}
		q.pop();
	}
};
int main()
{

	int n;
	int m;
	int start;
	int a;
	int b;
	cin >> n >> m >> start;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	for (int i = 0; i < n; ++i)
		sort(vec[i].begin(), vec[i].end());

	dfs(start);
	cout << "\n";
	bfs(start);

}