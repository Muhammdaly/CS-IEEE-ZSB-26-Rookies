#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int target = 0;
int good = 0, total = 0;

void dfs(int idx, int pos) {
    if (idx == s2.size()) {
        total++;
        if (pos == target) good++;
        return;
    }

    if (s2[idx] == '+')
        dfs(idx + 1, pos + 1);
    else if (s2[idx] == '-')
        dfs(idx + 1, pos - 1);
    else {
        dfs(idx + 1, pos + 1);
        dfs(idx + 1, pos - 1);
    }
}

int main() {
    cin >> s1 >> s2;

    for (char c : s1) {
        if (c == '+') target++;
        else target--;
    }

    dfs(0, 0);

    double prob = (double)good / total;
    cout << fixed << setprecision(12) << prob;
}
