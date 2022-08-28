#include <bits/stdc++.h>
using namespace std;

//1068 트리
// 루트가 당연히 0이라고 생각했는데, 아닌 케이스가 들어가있었다..
// 아니 인간적으로 이런건 문제에 기입해줘야지 ㅡㅡ

//dfs로 리프노드 탐색.
int dfs(const vector<vector<int>>& children, int node)
{
    int result = 0;
    
    for (int i = 0; i < children[node].size(); i++)
    {
        result += dfs(children, children[node][i]);
    }
    if (children[node].size() == 0) // vector가 비어잇다면 리프노드임.
        return 1;
    return result;
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
       
    int N;
    cin >> N;
    vector<vector<int>> children(N, vector<int>()); // i번째 노드의 자식들은 children[i]에 저장.
    vector<int> parentv;                            // 각 번호 노드의 부모를 저장하는 vector.
    int root =0;
    for (int i = 0; i < N; i++)
    {
        int parent;
        cin >> parent;
        parentv.push_back(parent);
        if (parent == -1)
        {
            root = i;
            continue;
        }
        children[parent].push_back(i);
    }

    //삭제할녀석 부모를찾아서 부모의 자식들을저장한 vector에서 제외시킴.
    int erase;
    cin >> erase;
    if (erase == root)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i<children[parentv[erase]].size(); i++)
    {
        if (erase == children[parentv[erase]][i])
        {
            children[parentv[erase]].erase(children[parentv[erase]].begin() + i);
        }
    }

    int result = dfs(children, root);
    cout << result;
	return 0;
}

