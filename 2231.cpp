#include <bits/stdc++.h>

using namespace std;

int main() {
   int n;
   
   cin >> n;
   
   for (int i = 1; i <= n; i++) {
       int a = i;
       for (int j = i; j > 0; j /= 10) {
           a += j % 10;
       }
       if (a == n) {
           cout << i;
           return 0;
       }
   }
   
   cout << 0;
}