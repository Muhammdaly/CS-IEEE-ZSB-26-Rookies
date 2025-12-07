#include <iostream>
using namespace std;

int main(){
    int k,r;
    cin >> k >> r;
    int count = 1;
    int total = 0;
    while(1){
        total = count * k;
        if(total%10 == 0 || total%10 == r){
            cout << count;
            break;
        }
        count++;
    }
}
