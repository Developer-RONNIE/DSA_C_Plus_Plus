#include <iostream>
using namespace std;

int main () {
    int m = 5;
    for (int i = 1; i <= m; i++) {
        int n = 5;
        for (int j = 1; j <= m; j++) {
            cout << "*" ;
        }
        cout << endl;
    }

    return 0;
}