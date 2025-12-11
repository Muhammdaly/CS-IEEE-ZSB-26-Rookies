#include <iostream>

using namespace std;

int main()
{
    int n ;cin>>n;
    char arr[101];
    int freq[26]={0};
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    for(int j=0 ; j<n ; j++){
        if(arr[j]>='a' && arr[j]<='z'){
            freq[arr[j]-'a']++;
        }
        else{
            freq[arr[j]-'A']++;
        }
    }
    bool valid = true;
    for(int c=0 ; c<26 ;c++){
        if(freq[c]==0){
            valid = false;
        }
    }
    if(valid){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
