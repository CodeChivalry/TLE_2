#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int func(int i,int j,int N,int M,vector<vector<int>>& matrix){
    if(i>=N || j>=M) return INT_MIN;
    int d=func(i+1,j,N,M,matrix);
    int r=func(i,j+1,N,M,matrix);
    if(d==INT_MIN && r==INT_MIN){
        return matrix[i][j];
    }
    else return matrix[i][j]+max(d,r);
}
int main(){
    int N,M;
    cin>>N>>M;
    vector<vector<int>> matrix(N,vector<int>(M));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<func(0,0,N,M,matrix);
}