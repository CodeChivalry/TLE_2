#include <bits/stdc++.h>
using namespace std;
const int N=10;
bool prime[N];
int main(){
    for(int i=0;i<N;i++){
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(int i=2;i*i<=N;i++){
        if(prime[i]==1){
            for(int j=i*i;j<N;j+=i){
                prime[j]=0;
            }
        }
    }
    for(int i=0;i<N;i++){
        cout<<i<<' '<<prime[i]<<endl;
    }
}