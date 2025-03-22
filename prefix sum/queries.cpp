#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    int n;
    cin >> n >> m;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> pref(n);
    pref[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = v[i] + pref[i - 1];
    }
 
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        --l, --r;
 
        long long ans = pref[r] - (l >= 1 ? pref[l - 1] : 0);
        cout << ans << '\n';
    }

}
