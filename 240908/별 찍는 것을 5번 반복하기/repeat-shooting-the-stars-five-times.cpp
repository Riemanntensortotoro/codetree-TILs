#include <iostream>
using namespace std;

void Print5Stars() {
    for(int i=0; i<10; i++) {
        cout << "*";
    }
    cout << "\n";
}
 
int main() {
    for (int j=0; j<5; j++) {
        Print5Stars();
    }
    return 0;
}