#include <bits/stdc++.h>
#define ll unsigned long long

using namespace std;

typedef vector<int> vi;

int main() {
    int n;
    vi v;
    ll t = 0;
    ll res = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        t += a;
    }
    
    for (int i = 0; i < n; i++) {
        ll m = (ll)v[i];
        t -= m;
        res = (res + t * m) % 1000000007;
    }
    
    cout << res;
}