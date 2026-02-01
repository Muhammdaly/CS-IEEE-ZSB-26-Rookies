#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    long long X;
    cin >> X;

    long long ans_a = 1, ans_b = X;

    for (long long i = 1; i * i <= X; i++) {
        if (X % i == 0) { 
            long long j = X / i;
            
            if (GCD(i, j) == 1) {
                ans_a = i;
                ans_b = j;
            }
        }
    }

    cout << ans_a << " " << ans_b << endl;

    return 0;
}