#include <bits/stdc++.h>

using namespace std;

bool check(int a, int b, int c, int d, int e, int f, int x, int y) {
    return (a * x + b * y == c) && (d * x + e * y == f);
}

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    for (int x = 0; x <= 999; x++) {
        for (int y = 0; y <= 999; y++) {
            if (check(a, b, c, d, e, f, x, y)) {
                cout << x << " " << y;
                return 0;
            }
            if (check(a, b, c, d, e, f, -x, y)) {
                cout << -x << " " << y;
                return 0;
            }
            if (check(a, b, c, d, e, f, x, -y)) {
                cout << x << " " << -y;
                return 0;
            }
            if (check(a, b, c, d, e, f, -x, -y)) {
                cout << -x << " " << -y;
                return 0;
            }
        }
    }
}