#include <iostream>
#include <string>
using namespace std;
int main(){
    int a ,b;
    cin>>a>>b;
    string str1,str2;
    for(int i=0;i<b;i++){
        str1 += to_string(a);
    }
    for(int i=0;i<a;i++){
        str2 += to_string(b);
    }
    if(str1<str2)cout << str1;
    else if (str2<str1)cout << str2;
    else cout << str1;
}