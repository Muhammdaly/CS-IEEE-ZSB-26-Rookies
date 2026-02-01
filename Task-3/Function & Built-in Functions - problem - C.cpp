#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x;
    float y;
    cin >> x >> y;
    if(x%5==0 && x<y){
        y -= (float(x)+.5);
    }
    cout << fixed << setprecision(2) << y;
}