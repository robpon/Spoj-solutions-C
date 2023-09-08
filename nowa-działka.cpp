#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    for (int a = 0; a < t; a ++){
        int kroki;
        cin >> kroki;
        if(kroki > 0 && kroki <= 1000){
            cout << kroki*kroki << endl;
        }
    }
    
    
    return 0;
}
