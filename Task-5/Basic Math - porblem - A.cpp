#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0 ; i<n ; i++){
        int num;cin>>num;
        int count = 0;
        for(int j=1;j*j<=num ; j++){
            if (num % j == 0){
                count++;
                if (j!=num/j) count++;
            }
        }
        cout << count <<  endl;
    }
}