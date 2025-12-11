#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,column;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int num;
            cin >>num;
            if(num == 1){
                row = i;
                column = j;
            } 
        }
    }
    int steps = abs(row-2)+abs(column-2);
    cout << steps;
}