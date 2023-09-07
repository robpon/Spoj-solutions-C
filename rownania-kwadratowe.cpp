#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

vector<string> split(string text, string detelminer){
        string part = "";
        vector<string> splited;
        for (int  i = 0; i < text.length(); i++){
            if(text[i]==detelminer[0]){
                bool match = true;
                for(int j = 1; j < detelminer.length(); j++){
                    if(text[i+j] != detelminer[j]){
                        match = false;
                        j = detelminer.length();
                    }
                }
                if (match){
                    i+=(detelminer.length()-1);
                    splited.push_back(part);
                    part = "";
                }else{
                    part += text[i];
                }
            }else{
                part += text[i];
            }
        }
        splited.push_back(part);
        
        return splited;
    }

int main(int argc, const char * argv[]) {
    string w;
    while(getline(cin, w)){
        vector<string> line = split(w, " ");
        float delta = stof(line[1])*stof(line[1]) - 4*stof(line[0])*stof(line[2]);
        if (delta>0){
            cout << "2" << endl;
        }else if(delta == 0){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
        cin >> ws;
    }
    return 0;
}
