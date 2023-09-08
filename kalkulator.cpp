#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string a;
    int b, c;
    while (cin >> a && cin >> b && cin >> c) {
        switch (a[0]) {
            case "+"[0]:
                cout << b + c << endl;
                break;
            case "-"[0]:
                cout << b - c << endl;
                break;
            case "*"[0]:
                cout << b * c << endl;
                break;
            case "/"[0]:
                cout << b / c << endl;
                break;
            case "%"[0]:
                cout << b % c << endl;
                break;
        }
    }
    return 0;
}

