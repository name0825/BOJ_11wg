#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, res = -1;
    cin >> n;
    a = n / 3;
    for (int i = 0; i <= a; i++) {
        for (int j = i; j <= a; j++) {
            int m = i + j;
            if (3 * i + 5 * j == n || 5 * i + 3 * j == n) {
                if (m < res || res == -1)
                    res = m;
            }
        }
    }
    cout << res;
}