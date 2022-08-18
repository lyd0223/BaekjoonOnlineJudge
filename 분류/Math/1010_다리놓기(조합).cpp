#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

//조합 공식을 이용해 풀이하려했으나, long long을 벗어나는 범위로
//조합의 규칙성을 이용해 푼다.
int Combination(int n, int m, long long* facArr)
{
    return facArr[m] / (facArr[m - n] * facArr[n]);
}
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;
    
    //int temp = 1;
    //long long facArr[31];
    //facArr[1] = 1;
    int arr[31][31] = { 0, };
    
    for (int i = 1; i < 31; i++)
        arr[i][0] = 1;
    arr[1][1] = 1;
    for (int c = 0; c < T; c++)
    {
        int N, M;
        cin >> N >> M; 
        
        /*if (M > temp)
        {
            for (int j = temp+1; j <= M; j++)
            {
                facArr[j] = facArr[j - 1] * j;
            }
            temp = M;
            cout << Combination(N, M, facArr);
        }
        else
        {
            cout << Combination(N, M, facArr);
        }*/
        
        for (int i = 2; i <= M; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }

        cout << arr[M][N] << "\n";
    }
    
}