#include <algorithm>
#include <vector>
#include <iostream>
#include <map>
using namespace std;


//벡터의 크기가 꽤 크기때문에, 선형탐색을 이용해봣으나 실패.
// 해쉬탐색 또는 이진탐색(lower bound)을이용하자.


//int BinarySearch(vector<int> numList, int d)
//{
//	int begin = 0;
//	int end = numList.size() - 1;
//	int piv;
//	while (end - begin >= 0)
//	{
//		piv = (begin + end) / 2;
//		if (numList[piv] == d)
//			return piv;
//		else if (numList[piv] < d)
//			begin = piv + 1;
//		else
//			end = piv - 1;
//	}
//	return -1;
//}
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	vector<int> numList;
	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d",&num);
		numList.push_back(num);
	}
	
	sort(numList.begin(), numList.end());
	
	map<int, int> hash;
	for (int i = 0; i < numList.size(); i++)
	{
		hash.insert(make_pair(numList[i], i));
	}
	for (int i = 0; i < M; i++)
	{
		int D;
		scanf("%d",&D);
		
		map<int, int>::iterator iter = hash.find(D);
		if (iter != hash.end())
			printf("%d\n", hash.at(D));
		else
			printf("-1\n");
	}
}