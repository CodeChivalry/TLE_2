#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll n){
    ll si=1;
    ll ei=1e9;
    ll ans=-1;
    while(si<=ei){
        ll mid=si+(ei-si)/2;
        if(mid*mid<=n){
            ans=mid;
            si=mid+1;
        }
        else{
            ei=mid-1;
        }
    }
    return ans;
}
int main(){
    ll n;
    cout<<"enter number";
    cin>>n;
    ll result=solve(n);
    cout<<result;
}