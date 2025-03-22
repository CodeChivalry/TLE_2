#include <bits/stdc++.h>
using namespace std;
const int N=20;
int SPF[N];
vector<int> prime_factors;
int solve(){
    int n;
    cin>>n;
    while(n>1){
        prime_factors.push_back(SPF[n]);
        n/=SPF[n];
    }
}
int main(){
    for(int i=0;i<N;i++) SPF[i]=i;
    for(int i=2;i*i<=N;i++){
        if(SPF[i]==i){
            for(int j=i*i;j<N;j+=i){
                if(SPF[j]==j){
                    SPF[j]=i;
                }
            }
        }
    }
    solve();
    for(int i=0;i<prime_factors.size();i++){
        cout<<prime_factors[i]<<' ';
    }
}
