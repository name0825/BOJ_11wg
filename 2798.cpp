#include <bits/stdc++.h>

using namespace std;
void solv(int, int, int);

int c, n, res = 0;
vector<int> v;

int main() {
    cin >> c;
    cin >> n;
    
    for (int i = 0; i < c; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    
    solv(0, 0, 0);
    cout << res;
}

void solv(int i, int r, int depth) {
    if (depth > 2)  return;
    for (; i < c; i++) {
        r += v[i];
        if (r <= n && depth == 2) {
            if (abs(n - r) < abs(n - res)) {
                res = r;
            }
            if (r == n) {
                return;
            }
        }else solv(i + 1, r, depth + 1);
        r -= v[i];
    }
}