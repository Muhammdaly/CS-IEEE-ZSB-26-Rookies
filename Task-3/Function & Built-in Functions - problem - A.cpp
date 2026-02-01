#include <iostream>
#include <cmath>
using namespace std;
void Health(float health,float attack){
    float count = ceil(health/attack);
    cout << count;
}
int main(){
    float health,attack;
    cin>>health>>attack;
    Health(health,attack);
}