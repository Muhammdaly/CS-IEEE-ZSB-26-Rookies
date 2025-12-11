#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;cin >> str;

    bool all_upper = true;
    for(char c : str){
        if( ! (c >= 65 && c <= 90) ){
            all_upper = false;
            break;
        }
    }

    bool first_lower_rest_upper = false;
    if(str[0] >= 97 && str[0] <= 122){  
        first_lower_rest_upper = true;
        for(int i = 1; i < str.size(); i++){
            if(!(str[i] >= 65 && str[i] <= 90)){
                first_lower_rest_upper = false;
                break;
            }
        }
    }

    if(all_upper || first_lower_rest_upper){
        for(char &c : str){
            if(c >= 97 && c <= 122) c -= 32;
            else if(c >= 65 && c <= 90) c += 32;
        }
    }

    cout << str;
}
