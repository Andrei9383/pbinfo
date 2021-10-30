#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("interclasare1.in");
    ofstream cout("interclasare1.out");
    int64_t n, m; cin >> n;
    vector<int64_t> a;
    vector<int64_t> b;
    vector<int64_t> c(200002);
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    cin >> m;
    for(int i = 0; i<m; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    c.erase(unique(c.begin(), c.end()), c.end());
    int lin = 0;
    for(int i = 0; i<c.size() - 1; i++){
        cout << c[i] << " ";
        lin++;
        if(lin >= 10){
            cout << endl;
            lin = 0;
        }
    }
    return 0;
}