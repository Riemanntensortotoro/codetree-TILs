#include <iostream>
#include <vector>

using namespace std;

bool is_continuous_subsequence(const vector<int>& A, const vector<int>& B) {
    int n1 = A.size(), n2 = B.size();
    for (int i = 0; i <= n1 - n2; ++i) {
        bool match = true;
        for (int j = 0; j < n2; ++j) {
            if (A[i + j] != B[j]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> A(n1), B(n2);

    for (int i = 0; i < n1; ++i) cin >> A[i];
    for (int i = 0; i < n2; ++i) cin >> B[i];

    bool result = is_continuous_subsequence(A, B);

    cout << (result ? "Yes" : "No") << endl;

    return 0;
}