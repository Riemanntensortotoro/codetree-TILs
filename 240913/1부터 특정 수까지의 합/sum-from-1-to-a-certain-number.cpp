#include <iostream>
using namespace std;

int sumNum(int N) {
    if (N == 1) {
        return 1;
    }
    return (sumNum(N-1) + N);

}

int main() {
    int N;
    cin >> N;
    cout << sumNum(N) / 10 <<"\n";
    return 0;
}