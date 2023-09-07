#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    cin >> x;
    if(0< x && x<=100){
        for(int i = 0; i < x; i++){
            int y = 0;
            cin >> y;
            int tab[y];
            int num;
            cin >> num;
            tab[y-1] = num;
            for(int j = 0; j < y-2; j++){
                cin >> num;
                tab[j] = num;
            }
            cin >> num;
            tab[y-2] = num;
            for(int j = 0; j < y; j++){
                cout << tab[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

