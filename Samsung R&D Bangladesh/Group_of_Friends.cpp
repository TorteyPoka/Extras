#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin>>ar[i];
        if(i>0)
        {
            __gcd(ar[i-1], ar[i])
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}