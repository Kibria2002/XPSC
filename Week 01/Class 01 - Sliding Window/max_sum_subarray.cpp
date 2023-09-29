#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int k; cin >> k;
    int mx = INT_MIN;
    for(int i = 0; i < n - k + 1; i++) {
        int s = 0;
        for(int j = i; j < i + k; j++) {
            s += a[j];
        } 
        mx = max(mx, s);
    }
    cout << mx << endl;
    return 0;
}
