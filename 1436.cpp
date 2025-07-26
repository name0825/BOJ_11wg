#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 666, c = 0;;i++) {
        int chk = 0, copy = i;
        while(copy) {
            if (copy % 10 == 6) {
                chk++;
                if (chk == 3) {
                    c++;
                    if (c == n) {
                        cout << i;
                        return 0;
                    }
                }
            }else
                chk = 0;
            copy /= 10;
        }
    }
}