#include <bits/stdc++.h>
#define FALSE 0

using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pi;
typedef queue<pair<int, int>> qp;

void DFS(pi);

vvi ma, chk;
int n, m, c;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        vi v, v1;
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            v.push_back(a);
            v1.push_back(0);
        }
        ma.push_back(v);
        chk.push_back(v1);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ma[i][j] && !chk[i][j]) {
                c++;
                DFS({i, j});
            }
        }
    }
    
    cout << c;
}

void DFS(pi point) {
    qp q;
    q.push(point);
    while(q.size()) {
        pi p = q.front();
        for (int i = -1; i < 2; i++) {
            int y = p.first + i;
            if (y < 0 || y >= n)
                continue;
            for (int j = -1; j < 2; j++) {
                int x = p.second + j;
                if (x < 0 || x >= m)
                    continue;
                if (ma[y][x] == 0 || chk[y][x] == 1)
                    continue;
                chk[y][x] = 1;
                q.push({y, x});
            }
        }
        q.pop();
    }
}