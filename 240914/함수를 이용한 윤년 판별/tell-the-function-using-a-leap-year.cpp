#include <iostream>
using namespace std;

bool yoonyear(int n) {
    return (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0));
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