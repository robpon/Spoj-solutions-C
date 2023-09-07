

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int x = 0;
    cin >> x;
    if (0<=x && x<= 30){
            for(int i = 0; i < x; i++){
                int y = 0;
                cin >> y;
                if (0<= y && y<=1000000000){
                    if (y == 0 || y == 1){
                        cout << "0 1" << endl;
                    }else if(y>9){
                        cout << "0 0" << endl;
                    }else{
                        int w = 1;
                        for (int j = 1; j <= y; j ++){
                            w*=j;
                        }
                        string wS = to_string(w);
                        if (wS.length()<2){
                            cout << "0 " << wS[wS.length()-1] << endl;
                        }else{
                            cout << wS[wS.length()-2]  << " " << wS[wS.length()-1] << endl;
                        }
                    }
                    
                }
        }
    }
    return 0;
}
