//
//  main.cpp
//  Start
//
//  Created by Robert Ponikiewski on 06/09/2023.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        int prime;
        cin >> prime;
        bool is = true;
        if (prime != 0 && prime != 1){
            if(prime != 2){
                for (int j = 2; j < sqrt(prime)+1; j++){
                    if (prime % j==0){
                        is = false;
                        j = prime;
                    }
                }
                cout << (is ? "TAK" : "NIE") << endl;
            }else{
                cout << "TAK" << endl;
            }
            
        }else{
            cout << "NIE" << endl;
        }
        
        
    }
    return 0;
}
