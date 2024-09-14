#include <iostream>
    #include <cmath>
    using namespace std;

    bool is_prime(int n) {
        if (n<2) return false;
        for (int i=2; i<=sqrt(n); i++) {
            if (n%i==0) return false;
        }
        return true;
    }

    int main() {
        int a, b;
        long long sum = 0;
        cin >> a >> b;

        bool result = true;
        for (int i=a; i<=b; i++) {
            if (is_prime(i)) {
                sum += i;
            }
        }        
        cout << sum;
        return 0;
    }