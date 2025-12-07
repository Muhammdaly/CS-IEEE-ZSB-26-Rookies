#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    cin.ignore();
    int problem_cnt=0;
    for(int i=0;i<n;i++){
        int person_cnt=0;
        string s;
        getline(cin,s);
        for(char c:s){
            if(c == '1')
                person_cnt++;
        }
        if(person_cnt>1)
            problem_cnt++;
    }
    cout << problem_cnt;
}