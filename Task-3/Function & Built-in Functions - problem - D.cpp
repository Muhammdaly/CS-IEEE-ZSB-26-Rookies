#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n;
    int k,cnt=0;
    cin >> n >> k;
    for (int i=0 ; i<40 ;i++){
        if(pow(k,i)<=n){
            cnt++;
        }
        else{
            break;
        }
    }
    cout << cnt;
}