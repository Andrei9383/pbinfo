#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream cin("interclasare2.in");
    ofstream cout("interclasare2.out");
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
    auto it = set_intersection(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    c.resize(it - c.begin());
    int lin = 0;
    for(int i = 0; i<c.size(); i++){
        cout << c[i] << " ";
        lin++;
        if(lin >= 10){
            cout << endl;
            lin = 0;
        }
    }
    return 0;
}