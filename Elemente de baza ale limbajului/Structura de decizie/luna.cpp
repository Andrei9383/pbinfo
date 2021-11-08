#include <iostream>
#include <string>

using namespace std;

string luni[] = {" ", "ianuarie", "februarie", "martie", "aprilie", "mai", "iunie", "iulie", "august", "septembrie", "octombrie", "noiembrie", "decembrie"};

int main(){
    int n; cin >> n;
    cout << luni[n];
    return 0;
}