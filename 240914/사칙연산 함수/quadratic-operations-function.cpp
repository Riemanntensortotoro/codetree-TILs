#include <iostream>
#include <string>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int devide(int a, int b) {
    return a / b;
}

int main() {
    int a, c, result;
    char o;
    cin >> a >> o >> c;
    if (o == '+') {
        result = add(a, c);
        cout << a << " " << o << " " << c << " " << "= " << result;
    }
    else if (o == '-') {
        result = subtract(a, c);
        cout << a << " " << o << " " << c << " " << "= " << result;
    }
    else if (o == '*') {
        result = multiply(a, c);
        cout << a << " " << o << " " << c << " " << "= " << result;
    }
    else if (o == '/') {
        result = devide(a, c);
        cout << a << " " << o << " " << c << " " << "= " << result;
    }
    else {
        cout << "False";
    }
    return 0;
}