
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int sum = 0;
    while(std::cin >> n){
        sum += n;
        cout << sum << endl;
    }
    return 0;
}
