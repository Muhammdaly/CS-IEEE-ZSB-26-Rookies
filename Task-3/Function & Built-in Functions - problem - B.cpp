#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[1000];
    for(int i=0;i<2*n+1;i++){
        cin>>arr[i];
    }
    for(int i=1;i<2*n+1;i+=2){
        if(k==0)break;
        if((arr[i]-1)> arr[i-1] && (arr[i]-1)>arr[i+1]){
            arr[i]=arr[i]-1;
            k-=1;
        }
    }
    for(int i=0;i<2*n+1;i++){
        cout << arr[i] << " ";
    }
}