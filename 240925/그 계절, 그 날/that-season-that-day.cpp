#include <iostream>
#include <string>
using namespace std;

bool yoonyear(int y) {
    if (y % 4 != 0) return false;
    else if (y % 100 == 0 && y % 400 != 0) return false;
    return true;
}

int fullmonth(int m) {
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        return 31;
    }
    if (m == 2) return 28;
    else return 30;
}

string weather(int m) {
    if (m==1 || m==2 || m==12) return "Winter";
    if (m==3 || m==4 || m==5) return "Spring";
    if (m==6 || m==7 || m==8) return "Summer";
    else return "Fall";
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    if (yoonyear(y) && m==2 && (d>28)) {
        cout << "Winter" << endl;
    }
    else if (d > fullmonth(m)) {
        cout << -1 << endl;
    } 
    else {
        cout << weather(m) <<endl;
    }
    return 0;
}