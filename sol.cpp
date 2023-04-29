#include <bits/stdc++.h>
using namespace std;

void test_case(int& tc) {
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    string ans = "";
    bool added = false;
    for (char c : s) {
        if ((c - '0') < d && !added) { // strictly less than (<)
            ans += (char) d + '0';
            added = true;
        }
        ans += c;
    }
    if (!added) {
        ans += (char) d + '0';
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        test_case(tc);
    }
}
