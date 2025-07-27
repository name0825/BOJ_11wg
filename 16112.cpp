#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef unsigned long long ll;

int main() {
    vi v;
    int n, k;
    ll res = 0;
    
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
            res += (ll)v[i] * (ll)(i < k ? i : k);
    
    cout << res;
}