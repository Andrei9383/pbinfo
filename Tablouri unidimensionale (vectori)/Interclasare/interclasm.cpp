#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("interclasm.in");
    ofstream cout("interclasm.out");
    int64_t x, n, m; cin >> x >> n; 
    vector<int64_t> a;
    for(int i = 0; i<n; i++){
        int q; cin >> q;
        a.push_back(q);
    }
    vector<int64_t> b;
    vector<int64_t> c(200002);
    cin >> m;
    for(int i = 0; i<m; i++){
        int q; cin >> q;
        b.push_back(q);
    }
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    for(int i = 0; i<n + m; i++){
        if(c[i] % x == 0){
            if(c[i] != c[i - 1] && c[i] != c[i + 1]){
                cout << c[i] << " ";
            }
        }
    }
    return 0;
}