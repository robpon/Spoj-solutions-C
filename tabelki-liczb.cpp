#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    for (int a = 0; a < t; a ++){
        int x = 0, y = 0;
        cin >> x;
        cin >> y;
        int tab[x][y];
        for(int i = 0; i < x; i++){
            for(int j = 0; j < y; j ++){
                cin >> tab[i][j];
            }
        }
        
        int rotated[x][y];
        
        for(int i = 1; i < x; i++){
            rotated[i][0] = tab[i-1][0];
        }
        for(int i = x-2; i >= 0; i--){
            rotated[i][y-1] = tab[i+1][y-1];
        }
        
        for(int i = 1; i < y; i++){
            rotated[x-1][i] = tab[x-1][i-1];
        }
        
        for(int i = y-2; i >= 0; i--){
            rotated[0][i] = tab[0][i+1];
        }
        for(int i =1; i < x-1; i++){
            for(int j = 1; j < y-1; j ++){
                rotated[i][j] = tab[i][j];
            }
        }
        
        for(int i = 0; i < x; i++){
            for(int j = 0; j < y; j ++){
                cout << rotated[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    
    return 0;
}
