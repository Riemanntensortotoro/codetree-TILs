#include <iostream>
using namespace std;

bool yoonyear(int n) {
    if (n % 4 == 0) {
        if (n % 100) {
            if (n % 400) return true;
            return false;
        }
        return true;
    }
    return false;
}

int main() {
    int y;
    cin >> y;
    if (yoonyear(y)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}