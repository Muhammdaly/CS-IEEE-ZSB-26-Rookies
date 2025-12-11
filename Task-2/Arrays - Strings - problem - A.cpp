#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;string str;
        cin >> n >> str;
        int freq[26]={0};
        int num=0;
        for(size_t j=0; j<str.length();j++){
            freq[str[j]-'A']++;
        }
        for(int c=0; c<26;c++){
            if(freq[c]==1){
                num+=2;
            }
            else if (freq[c]>1){
                num+=2;
                num+=(freq[c]-1);
            }
        }
        cout << num << endl;
    }
}