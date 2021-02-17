#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct point {
	int x;
	int y;
};
bool cmp(const point& p1, const point& p2) {
	if (p1.x < p2.x) {
		return true;
	}
	else if (p1.x == p2.x) {
		return p1.y < p2.y;
	}
	else {
		return false;
	}
}

point pt[100001];
int main()
{
	int n;
	int x, y;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> pt[i].x;
		cin >> pt[i].y;
	}
	sort(pt, pt + n, cmp);

	for (int i = 0; i < n; i++)
	{
		cout << pt[i].x << " " << pt[i].y << "\n";
	}
}