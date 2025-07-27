#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef unsigned long long ll;

int main() {
    int n;
    while(cin >> n) {
        bool c = false;
        int m, p;
        
        if (n <= 0) {
            cout << "Jolly\n";
            continue;
        }
        
        cin >> p;
        
        if (n == 1) {
            cout << "Jolly\n";
            continue;
        }

        vb v(n - 1, false);
        for (int i = 0; i < n - 1; i++) {
            cin >> m;
            if (c)
                continue;
            int gap = abs(m - p);
            if (gap >= n || gap == 0 || v[gap - 1]) {
                c = true;
                continue;
            }
            v[gap - 1] = true;
            p = m;
        }
        
        if (!c)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }
}