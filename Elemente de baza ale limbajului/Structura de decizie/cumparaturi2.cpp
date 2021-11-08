#include <iostream>

using namespace std;

int main(){
   int s, d, r, m, max=1e5; cin>>s>>d>>r>>m;
   if(s - d >= 0 && max >= s - d) max = s - d;
   if(s - r >= 0 && max >= s - r) max = s - r;
   if(s - m >= 0 && max >= s - m) max = s - m;
   if(max == 1e5) cout << "nimic";
   else if(max == s - d) cout << "drona";
   else if(max == s - r) cout << "robot";
   else cout << "masina";
   return 0;
}