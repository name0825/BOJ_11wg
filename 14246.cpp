#include <bits/stdc++.h>
#define FALSE 0

using namespace std;
typedef vector<int> vi;

unsigned long long solv(unsigned long long);

vi v;
unsigned long long n, k;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cin >> k;
    cout << solv(0);
}

unsigned long long solv(unsigned long long depth) {
    if (depth >= n)
        return 0;

    unsigned long long t = 0;
    unsigned long long s = 0;
    for (int i = depth; i < n; i++) {
        t += v[i];
        if (t > k) {
            s = n - i;
            break;
        }
    }
    if (s == 0)
        return 0;
    return s + solv(depth + 1);
}