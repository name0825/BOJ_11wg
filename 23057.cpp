#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef vector<bool> vb;

void solv(int, int);

int n, chk = 0;
vi v;
vb v1;
    
int main() {
    int m, c;
    
    cin >> n;
    
    m = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        m += a;
    }
    
    v1.resize(m, 0);
    solv(0, 0);
    
    /*c = 0;
    for (int i = 0; i < m; i++)
        if (v1[i] == 0)
            c++;*/
    cout << m - chk;
}

void solv(int s, int depth) {
    int size = (int)(v.size());
    if (depth >= size)
        return;
    for (int i = depth; i < size; i++) {
        s += v[i];
        if (v1[s - 1] == 0) {
            v1[s - 1] = 1;
            chk++;
        }
        solv(s, i + 1);
        s -= v[i];
    }
}