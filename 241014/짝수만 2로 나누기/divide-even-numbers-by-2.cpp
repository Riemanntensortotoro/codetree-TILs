#include <iostream>
using namespace std;

void divide2(int arr[], int N) {
    for (int j=0; j<N; j++) {
        if (arr[j] % 2 == 0) {
            arr[j] /= 2;
        }
    }
}

int main() {
    int N;
    cin >> N;
    int arr[N];

    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    divide2(arr, N);
    for (int k=0; k<N; k++) {
        cout << arr[k] <<" ";
    }

    return 0;
}