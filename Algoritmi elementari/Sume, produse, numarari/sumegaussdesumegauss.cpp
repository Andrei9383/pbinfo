#include <iostream>  

using namespace std;

int main() {
   unsigned long long int x, n, k, a, b, c, sem; cin >> n;
   for (int i = 1; i <= n; i++) {
       cin >> x;
       k = x / 2;
       a = k;
       b = k + 1;
       c = 2 * k + 1;
       sem = 0;
       if (a % 3 == 0) {
           a /= 3;
           sem = 1;
       }
       if (b % 3 == 0 && sem == 0) {
           b /= 3;
           sem = 1;
       }
       if (c % 3 == 0 && sem == 0) {
           c /= 3;
           sem = 1;
       }
       cout << 2 * a * b * c + (x * (x + 1) / 2) * (x % 2) << " ";
   }
   return 0;

}