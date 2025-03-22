#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int func(int left,int W,int weight[],int value[],int idx,int N){
    if(idx>=N) return 0;
    if(left>=weight[idx]){
        return max(value[idx]+func(left-weight[idx],W,weight,value,idx+1,N),func(left,W,weight,value,idx+1,N));
    }
    return func(left,W,weight,value,idx+1,N);
}
int main(){
    int N,W;
    cin>>N>>W;
    int weight[N];
    int value[N];
    for(int i=0;i<N;i++){
        cin>>weight[i]>>value[i];
    }
    cout<<func(W,W,weight,value,0,N);
}
