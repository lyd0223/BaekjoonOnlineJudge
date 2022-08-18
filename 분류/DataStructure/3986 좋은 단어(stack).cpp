#include <bits/stdc++.h>
using namespace std;

// 그냥 생각나는대로 구현했다. 근데 이 방법이아니라 스택을 이용한 방법이 더 낫다.
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int N;
//	cin >> N;
//
//	int result = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		string str;
//		cin >> str;
//
//		if (str.size() & 1)
//			continue;
//		
//		while (str.size() != 0)
//		{
//			//붙어있는 애들끼리먼저 처리한다.
//			
//			//while문 continue체크를 위한 변수.
//			bool check = 0;
//			for (int i = 0; i < str.size(); i++)
//			{
//				if (str[i] == str[i + 1])
//				{
//					str.erase(i, 2);
//					check = true;
//					break;
//				}
//			}
//			if (check)
//				continue;
//			//여기까지 내려오면 실패한거다.
//			break;
//		}
//		//짝이 맞아 다 지워졌다면 좋은단어이다.
//		if (str.size() == 0)
//			result++;
//	}
//	cout << result << endl;
//	return 0;
//}


//스택을 이용한 구현.
//위 풀이보다 수십배 빠르다.
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	int result = 0;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		stack<char> s;
		for (int i = 0; i < str.size(); i++)
		{
			if (!s.empty() && s.top() == str[i])
			{
				s.pop();
				continue;
			}
			s.push(str[i]);
		}

		if (s.empty())
			result++;
	}
	cout << result;
	return 0;
}