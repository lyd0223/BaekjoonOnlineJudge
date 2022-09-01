#include <bits/stdc++.h>
using namespace std;

//1920 수 찾기
// endl쓰면 시간초과 나는거 진심 개빡친다

bool BinarySearch(const vector<int>& v, int num)
{
    int start = 0;
    int end = v.size() -1;
    int mid;
    while (end - start >= 0)
    {
        mid = (end + start) / 2;
        if (num == v[mid])
            return true;ㅁ
        else if (num < v[mid])
            end = mid -1;
        else
            start = mid + 1;
    }
    return false;
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int N, M;
    cin >> N;
    vector<int> v1, v2;
    v1.reserve(100000);
    v2.reserve(100000);
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        v1.push_back(num);
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int num;
        cin >> num;
        v2.push_back(num);
    }
    
    sort(v1.begin(), v1.end());
    for (int i = 0; i < v2.size(); i++)
    {
        if (BinarySearch(v1, v2[i]))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
    
	return 0;
}

