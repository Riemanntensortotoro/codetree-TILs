#include <iostream>
using namespace std;

int main() {
    int N;
    int K;
    cin >> N;
    for (int i=0; i<N; i++) {
        for (int j=1; j<=N; j++) {
            K = (i * N + j) % 9;
            if (K == 0) {
                K = 9;
            }
            cout << K << " ";
        }
        cout << "\n";
    }
    return 0;
}