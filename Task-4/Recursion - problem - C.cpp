#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> a;
long long totalSum = 0;
long long ans = LLONG_MAX;

void solve(int idx, long long sum1) {
    if (idx == n) {
        long long sum2 = totalSum - sum1;
        ans = min(ans, abs(sum1 - sum2));
        return;
    }

    solve(idx + 1, sum1 + a[idx]);

    solve(idx + 1, sum1);
}

int main() {
    cin >> n;
    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        totalSum += a[i];
    }

    solve(0, 0);

    cout << ans;
}
