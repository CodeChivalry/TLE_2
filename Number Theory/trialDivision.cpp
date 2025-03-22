#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> prime;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            prime.push_back(i);
        }
    }
    if(n>1) prime.push_back(n);
    for(int i=0;i<prime.size();i++) cout<<prime[i]<<' ';
}