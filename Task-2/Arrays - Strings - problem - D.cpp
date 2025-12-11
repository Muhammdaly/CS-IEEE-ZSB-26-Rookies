#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        int arr[100];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int common;
        if(arr[0] == arr[1] || arr[0] == arr[2]){
            common = arr[0];
        }
        else{
            common = arr[1];
        }
        for(int c=0;c<n;c++){
            if(arr[c] != common){
                cout << c+1 << endl;
                break;
            }
        }
    }
}