#include <iostream>

using namespace std;

int main() {
   unsigned long long int N, S,f1,f2,f3; cin >> N;
   f1=N; f2=N+1; f3=2*N+1;
   if (f1%2==0) f1= f1/2;
   else f2 = f2 / 2;
   if (f1%3==0) f1 = f1 / 3;
   else if (f2%3==0) f2 = f2 / 3;
        else f3 = f3 / 3;
   S = ( ((f1*f2)% 10234573)*f3 ) % 10234573;
   cout << S << endl;
   return 0;
}