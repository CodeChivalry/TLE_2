#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result=0;
    for(int i=2;i<=n;i++){
        int cnt=0;
        int num=i;
        for(int j=2;j*j<=i;j++){
            if(num%j==0){
                cnt++;
                while(num%j==0){
                    num/=j;
                }
            }
        }
        if(num>1) cnt++;
        if(cnt==2) result++;
    }
    cout<<result;
}