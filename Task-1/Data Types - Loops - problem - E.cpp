#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    string str ="codeforces";
    for(int i=0;i<n;i++){
        char c;cin>>c;
        bool found = false;
        if(int(str.find(c)) > -1){
            found = true;
        }
        if(found)cout << "YES" << endl;
        else {cout << "NO" << endl;}
    }
}