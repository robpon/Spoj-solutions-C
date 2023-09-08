#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        string word;
        cin >> word;
        for (int j = 0; j < word.length()/2; j++){
            cout << word[j];
        }
        cout << endl;
    }
    return 0;
}
