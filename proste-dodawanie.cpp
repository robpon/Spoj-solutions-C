

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    cin >> x;
    if(0< x &&x<100){
        for(int i = 0; i < x; i++){
            int y = 0;
            cin >> y;
            int sum = 0;
            for(int j = 0; j < y; j++){
                int add;
                cin >> add;
                sum+=add;
            }
            cout << sum << endl;
        }
    }
    return 0;
}

