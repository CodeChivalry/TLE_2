#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    vector<int> pf(n);
    pf[0]=vec[0];
    for(int i=1;i<n;i++) pf[i]=pf[i-1]+vec[i];
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(l==0) cout<<pf[r]<<endl;
        else cout<<pf[r]-pf[l-1]<<endl;
    }
    return 0;
}