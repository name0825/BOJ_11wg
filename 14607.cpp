#include <bits/stdc++.h>
#define ll unsigned long long

using namespace std;

typedef vector<ll> vl;
typedef map<int, ll> mi;

mi note;

ll _max(ll a, ll b) {
    return a < b ? b : a;
}

ll happy(int n) {
    if (n <= 1)
        return 0;
    auto iter = note.find(n);
    if (iter != note.end())
        return iter -> second;
    ll a = n / 2;
    ll b = n - a;
    ll h = a * b + happy(a) + happy(b);
    note.insert({n, h});
    return h;
}

int main() {
    int n;
    cin >> n;
    cout << happy(n);
}