#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int n, x, y;
        cin >> n;
        cin >> x;
        cin >> y;
        vector<int> numbers;
        for(int j = x; j < n; j+=x){
            if(j%y!=0){
                numbers.push_back(j);
            }
        }
        for(int num: numbers){
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}
