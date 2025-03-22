#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> u=v;
    sort(u.begin(),u.end());
    vector<long long> pref1(n), pref2(n);
    pref1[0] = v[0];
    pref2[0]=u[0];
    for (int i = 1; i < n; i++)
    {
        pref1[i] = v[i] + pref1[i - 1];
        pref2[i]=u[i]+pref2[i-1];
    }
    int m;
    cin>>m;
    while (m--)
    {
        int type,l,r;
        cin >> type>>l >> r;
        --l, --r;
        long long ans;
        if(type==1){
            ans=pref1[r] - (l >= 1 ? pref1[l - 1] : 0);
        }
        else{
            ans=pref2[r] - (l >= 1 ? pref2[l - 1] : 0);
        }
        cout << ans << '\n';
    }

}
