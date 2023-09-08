#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    string a16[16] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
    cin >> x;
    for(int i = 0; i < x; i++){
        int liczba;
        cin >> liczba;
        int liczba16 = liczba;
        int liczba11 = liczba;
        string word16 = "", word11 = "";
        while (liczba16 > 15 ) {
            int r = liczba16%16;
            liczba16 = liczba16/16;
            word16+=a16[r];
        }
        word16+=a16[liczba16];

        while (liczba11 > 10 ) {
            int r = liczba11%11;
            liczba11 = liczba11/11;
            word11+=a16[r];
        }
        word11+=a16[liczba11];

        for(int j = word16.length()-1; j >=0 ; j--){
            cout << word16[j];
        }
        cout << " ";
        for(int j = word11.length()-1; j >=0 ; j--){
            cout << word11[j];
        }
        cout << endl;
        
    }
    return 0;
}

