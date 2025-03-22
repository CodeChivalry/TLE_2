#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int func(vector<int>& vec,int index,int sum){
    if(index==vec.size()){
        return sum==0;
    }
    return func(vec,index+1,sum-vec[index]) || func(vec,index+1,sum+vec[index]);
}
int main(){
    int N,X;
    cin>>N>>X;
    vector<int> vec(N);
    for(int i=0;i<N;i++){
        cin>>vec[i];
    }
    int result=func(vec,1,X-vec[0]);
    if(result){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}