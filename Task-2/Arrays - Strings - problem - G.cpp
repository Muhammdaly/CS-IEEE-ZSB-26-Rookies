#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        string str1 ,str2;
        cin>> str1>>str2;
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        if(str1 == str2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}