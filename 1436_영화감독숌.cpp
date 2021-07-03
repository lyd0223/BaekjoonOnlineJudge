#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <time.h>
using namespace std;

//완전탐색으로했는데, 10000대입시 시간이 6초나걸리는데 왜 맞는지모르겠다.
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    clock_t start , end;
    start = clock();

	//이런식으로 예외처리를해주면 훨씬 빠르다.
	/*int n, cnt = 0, i = 0, res;
	scanf("%d", &n);
	while (1)
	{
		if (cnt == n) break;
		if (i % 1000 == 666)
		{
			for (int j = 0; j < 1000; j++)
			{
				res = i * 1000 + j;
				cnt++;
				if (cnt == n) break;
			}
			i++;
		}
		else if (i % 100 == 66)
		{
			for (int j = 0; j < 100; j++)
			{
				res = i * 1000 + 600 + j;
				cnt++;
				if (cnt == n) break;
			}
			i++;
		}
		else if (i % 10 == 6)
		{
			for (int j = 0; j < 10; j++)
			{
				res = i * 1000 + 660 + j;
				cnt++;
				if (cnt == n) break;
			}
			i++;
		}
		else
		{
			res = i * 1000 + 666;
			cnt++;
			i++;
		}
	}
	printf("%d", res);*/


    int N;
    cin >> N;

    vector<int> v;
    int n = 666;
    while (v.size() != N)
    {
        string str = to_string(n);
        
        for (int i = 0; i < str.size()-2; i++)
        {
            if (str[i] == '6' && str[i+1] == '6' && str[i+2] =='6')
            {
                v.push_back(n);
                break;
            }
        }
        
        n++;
    }
    
    cout << v[N - 1];
    
    end = clock();
    cout << endl << (end - start);
}

