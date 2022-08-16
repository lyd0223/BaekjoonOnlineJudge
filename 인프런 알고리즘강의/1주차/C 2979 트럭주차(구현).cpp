#include <bits/stdc++.h>
using namespace std;

//시간에 따라 주차된 차의 수를 저장하는 배열
int gTimeArr[101];

//총 주차요금 계산하는 함수
int CostCheck(vector<int>& cost_v)
{
	int cost = 0;
	for (int i = 0; i < sizeof(gTimeArr)/4; i++)
	{
		int num = gTimeArr[i]; // 주차된 차의 수

		if (num == 0)
			continue;

		cost += cost_v[num-1] * num;
	}
	return cost;
}

int main()
{
	vector<int> cost_v;
	for (int i = 0; i < 3; i++)
	{
		int cost;
		cin >> cost;
		cost_v.push_back(cost);
	}

	for (int i = 0; i < 3; i++)
	{
		int start, end;
		cin >> start >> end;
		
		for (int j = start; j < end; j++)
		{
			gTimeArr[j]++;
		}
	}

	cout << CostCheck(cost_v);
}