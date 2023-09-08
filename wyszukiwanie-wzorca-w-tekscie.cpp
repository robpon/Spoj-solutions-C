#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

vector<int> split(string text, string detelminer){
        string part = "";
        int count = 0;
        vector<int> matched;
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
                    matched.push_back(i);
                    part = "";
                }else{
                    part += text[i];
                }
            }else{
                part += text[i];
            }
        }
        
        return matched;
    }

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    for(int j = 0; j < t; j++){
        int length;
        string d, text;
        cin >> length;
        cin >> d;
        cin >> text;
        if(d.length()==length){
            vector<int> x = split(text, d);
            for (int i = 0; i < x.size(); i++){
                cout << x[i] << endl;
            }
        }
    }
    return 0;
}
