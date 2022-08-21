#include <bits/stdc++.h>
using namespace std;

//2828 사과담기

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;
	int j;
	cin >> j;
	int nowPos = 1;
	int result = 0;
	for (int i = 0; i < j; i++)
	{
		int pos;
		cin >> pos;
		int dis = 0;
		if (nowPos < pos) // 오른쪽에있을때
		{
			if (nowPos + M - 1 < pos) // 오른쪽에있으면서 버켓 안에 안들어올때
			{
				dis = pos - nowPos - M + 1;
				nowPos += dis;
			}
			//버켓 안에 들어오면 굳이 뭘 할 필요없다.
		}
		else if( nowPos > pos) // 왼쪽에있을때
		{
			dis = nowPos - pos;
			nowPos -= dis;
		}
		
		result += dis;
	}
	cout << result;
	return 0;
}

