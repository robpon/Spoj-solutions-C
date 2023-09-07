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
            vector<int> tab;
            for(int j = 0; j < y; j++){
                int num;
                cin >> num;
                tab.push_back(num);
            }
            for(int j = y-1; j >= 0; j--){
                cout << tab[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

