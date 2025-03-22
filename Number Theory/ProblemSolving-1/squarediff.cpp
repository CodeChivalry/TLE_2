#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b;
    cin>>a>>b;
    long long num1=a-b;
    long long num2=a+b;
    if(num1!=1){
        cout<<"NO"<<endl;
        return;
    }
    //check if num2 is prime using trial
    long long cnt=0;
    for(long long i=2;i*i<=num2;i++){
        if(num2%i==0){
            
            while(num2%i==0){
                cnt++;
                num2/=i;
            }
        }
    }
    if(num2>1) cnt++;
    if(cnt==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}