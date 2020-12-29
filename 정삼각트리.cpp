#include <iostream>
#include <algorithm>

using namespace std;
int tri[502][502] = { 0, };
int main() {
    int n;
    cin >> n;

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> tri[i][j];
        }
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j <= i; j++) {
            tri[i][j] += max(tri[i - 1][j - 1], tri[i - 1][j]);
        }
    }

    int max = 0;
    for (int i = 1; i < n + 2; i++) {
        if (max < tri[n][i]) {
            max = tri[n][i];
        }
    }

    cout << max;

    return 0;
}