#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("interclasare3.in");
    ofstream cout("interclasare3.out");
    int64_t n, m; cin >> n >> m;
    vector<int64_t> a;
    vector<int64_t> b;
    vector<int64_t> c(200002);
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i<m; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    a.erase(remove_if(a.begin(), a.end(), [](int i){return i % 2 != 0;}), a.end());
    b.erase(remove_if(b.begin(), b.end(), [](int j){return j % 2 != 0;}), b.end());
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    int lin = 0;
    for(int i = 0; i<a.size() + b.size(); i++){
        cout << c[i] << " ";
        lin++;
        if(lin >= 20){
            cout << endl;
            lin = 0;
        }
    }
    return 0;
}