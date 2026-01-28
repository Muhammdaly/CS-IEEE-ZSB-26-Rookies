#include <iostream>
using namespace std;
void function(long long n){
    cout << n << " ";
    if (n==1) return;
    
    if (n%2==0){
        n/=2;
        function(n);
    }
    else{
        n=(n*3)+1;
        function(n);
    }
}
int main(){
    long long n;cin>>n;
    function(n);
}