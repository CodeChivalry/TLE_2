#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i].first>>vec[i].second;
        }
        int result=0;
        for(int i=1;i<n;i++){
            result+=2*(vec[i].first+vec[i].second);
        }
        result+=4*m;
        cout<<result<<endl;
    }
}