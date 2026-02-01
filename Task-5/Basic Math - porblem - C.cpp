#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    while(b != 0){
        a %= b;
        swap(a,b);
    }
    return a;
}

int main(){
    int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << n / 2 << endl;
	}    
}