#include <bits/stdc++.h>
using namespace std;

string s;
int n;
vector<bool> used;
vector<string> result;

void dfs(string curr) {
    if (curr.size() == n) {
        result.push_back(curr);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;


        if (i > 0 && s[i] == s[i - 1] && !used[i - 1])
            continue;

        used[i] = true;
        dfs(curr + s[i]);
        used[i] = false;
    }
}

int main() {
    cin >> s;
    n = s.size();

    sort(s.begin(), s.end());   
    used.assign(n, false);

    dfs("");

    cout << result.size() << '\n';
    for (auto &x : result)
        cout << x << '\n';
}
