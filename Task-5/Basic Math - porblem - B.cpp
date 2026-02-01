#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        long long num;cin>>num;
        vector<long long> v ;
        for(int j=2 ; j*j<num ;j++){
            if(num%j==0){
                v.push_back(j);
                num /= j;
            }
            if(v.size()==2){
                if(num!=0){
                    v.push_back(num);
                    break;
                }
                else break;
            }
        }
        if(v.size()==3 && v.front()!=v.back() && v.front()!=v.at(1) && v.at(1)!=v.back()){
            cout << "YES" << endl << v.front() << " " << v.at(1) << " " << v.back() << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}