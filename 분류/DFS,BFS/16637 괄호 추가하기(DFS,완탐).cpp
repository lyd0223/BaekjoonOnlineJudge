#include <bits/stdc++.h>
using namespace std;

//16637 괄호 추가하기
//dfs를 이용. 완전탐색.

int result = pow(-2,31);
int Calculation(int a, int b, char oper)
{
    if (oper == '+')
        return a + b;
    else if (oper == '-')
        return a - b;
    else if (oper == '*')
        return a * b;
    else
        return 0;
}
void dfs(vector<int>& numv, vector<char>& operv, int piv, int num)
{
    if (piv + 1 >= numv.size())
    {
        result = max(result, num);
        return;
    }
    dfs(numv, operv, piv + 1, Calculation(num, numv[piv+1], operv[piv]));

    if (piv + 2 >= numv.size())
        return;
    int temp = Calculation(numv[piv + 1], numv[piv + 2], operv[piv + 1]);
    dfs(numv, operv, piv + 2, Calculation(num, temp, operv[piv]));
    
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int N;
    cin >> N;
    string str;
    cin >> str;

    vector<int> numv;
    vector<char> operv;
    for (int i = 0; i < str.size(); i++)
    {
        if (i % 2 == 0)
            numv.push_back(str[i] - '0');
        else
            operv.push_back(str[i]);
    }
    dfs(numv, operv, 0, numv[0]);
    
    cout << result;
	return 0;
}

