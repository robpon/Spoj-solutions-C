#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a;
    cin >> b;
    int macierz [a][b];
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cin >> macierz[i][j];
        }
    }
    for (int i = 0; i < b; i++){
        for (int j = 0; j < a; j++){
            cout << macierz[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
