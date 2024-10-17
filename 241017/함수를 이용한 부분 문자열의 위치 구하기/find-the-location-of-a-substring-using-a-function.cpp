#include <iostream>
#include <string>
using namespace std;

int find_substring(string input, string target){
    int pos = input.find(target);
    if (pos != string::npos) {
        return pos;
    }
    return -1;
}

int main() {
    string input, target;
    getline(cin, input);
    getline(cin, target);

    cout << find_substring(input, target) << " ";
    return 0;
}