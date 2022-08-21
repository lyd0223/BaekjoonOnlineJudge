#include <bits/stdc++.h>
using namespace std;

//1992 쿼드트리

int dx[4] = { 0,1,0,1 };
int dy[4] = { 0,0,1,1 };

//재귀함수를 이용, dfs와 같은 원리.
//x,y는 시작위치 size는 사각형크기.
// 따라서 x+size-1이 끝위치가 된다.
void func(const vector<vector<char>>& v, int x, int y, int size, string& result)
{
	//범위안의 원소들이 모두 같은 값이라면 result에 추가해주고 return..
	for (int i = y; i < y+size; i++)
	{
		for (int j = x; j < x+size; j++)
		{
			//범위안의 원소중 다른게 있다면? breakfor로 간다.
			if (v[y][x] != v[i][j])
				goto breakfor; // 흐름에는 문제가 없어 이중포문 벗어나기위해 그냥 goto 썻다.
		}
	}
	result += v[y][x];
	return;

//범위 안의 원소중 다른게 있다면 여기로 온다. 재귀로 사각형을 4분할해준다.
breakfor:
	result += '(';
	for (int i = 0; i < 4; i++)
	{
		int nextsize = size / 2;
		int nextx = x + (dx[i] * nextsize);
		int nexty = y + (dy[i] * nextsize);
		func(v, nextx, nexty, nextsize, result);
	}
	result += ')';
	
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N; 
	cin >> N;
	vector<vector<char>> v(N, vector<char>(N, 0));
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str; 
		for (int j = 0; j < str.size(); j++)
		{
			v[i][j] = str[j];
		}
	}

	string result;
	func(v, 0, 0, N, result);
	cout << result;

	return 0;
}

