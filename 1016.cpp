#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lb;
typedef set<ll> sl;
typedef vector<ll> vl;
typedef vector<bool> vb;

int main() {
    int c;
    ll min, max, idx, r;
    
    cin >> min >> max;
    c = max - min + 1;
    idx = 2;
    vb v(c, false);
    while ((r = idx * idx) <= max) {
        ll n;
        n = min / r * r;
        if (n < min)
            n += r;
        //cout << r << " " << n << "\n";
        for (; n <= max; n += r) {
            if (v[n - min])
                continue;
            c--;
            v[n - min] = true;
        }
        idx++;
    }
    
    cout << c;
}
