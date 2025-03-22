#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<int> diff(n+1,0);
    while(q--){
        int l,r;
        cin>>l>>r;
        --l;
        --r;
        diff[l]++;
        diff[r+1]--;
    }
    for(int i=1;i<=n;i++){
        diff[i]+=diff[i-1];
    }
    sort(diff.begin(),diff.end(),greater<int>());
    sort(vec.begin(),vec.end(),greater<int>());
    long long answer=0;
    for(int i=0;i<n;i++){
        answer+=vec[i]*diff[i];
    }
    cout<<answer;
}