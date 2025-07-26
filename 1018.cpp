#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, res = 9999;
    vector<vector<int>> v;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        vector<int> v1;
        for (int j = 0; j < m; j++) {
            char a;
            cin >> a;
            v1.push_back(a == 'B' ? 0 : 1);
        }
        v.push_back(v1);
    }
    
    for (int i = 0; i <= (n - 8); i++) {
        for (int j = 0; j <= (m - 8); j++) {
            int s, chk;
            s = 0;
            chk = 0;
            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    if (v[k][l] == chk)
                        s++;
                    chk = (chk + 1) % 2;
                }
                chk = (chk + 1) % 2;
            }
            if (s < res)
                res = s;
            s = 0;
            chk = 1;
            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    if (v[k][l] == chk)
                        s++;
                    chk = (chk + 1) % 2;
                }
                chk = (chk + 1) % 2;
            }
            if (s < res)
                res = s;
            if (res == 0) {
                cout << 0;
                return 0;
            }
        }
    }
    
    cout << res;
}