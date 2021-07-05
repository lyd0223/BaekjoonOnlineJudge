#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

//나눳을때 정수가 아닌지 판별하는법은, 다시 곱했을때와 같은지를 확인하면된다.
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int plus, minus;
    cin >> plus >> minus;
    
    int teamA = (plus + minus) / 2;
    int teamB = (plus - minus) / 2;
    if (teamA + teamB != plus || teamA - teamB != minus || teamA < 0 || teamB < 0)
        cout << -1;
    else
        cout << teamA << " " << teamB;
}