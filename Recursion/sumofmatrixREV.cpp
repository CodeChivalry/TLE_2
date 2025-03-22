# include<iostream>
#include <bits/stdc++.h>
using namespace std;
void func(int i,int j,int R,int C,vector<vector<int>> &matrix1,vector<vector<int>> &matrix2){
    if(i>=R) return;
    if(j>=C){
        cout<<endl;
        j=0;
        func(i+1,j,R,C,matrix1,matrix2);
        return;
    }
    cout<<matrix1[i][j]+matrix2[i][j]<<' ';
    func(i,j+1,R,C,matrix1,matrix2);
}
int main(){
    int R,C;
    cin>>R>>C;
    vector<vector<int>> matrix1(R,vector<int>(C));
    vector<vector<int>> matrix2(R,vector<int>(C));
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>matrix1[i][j];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>matrix2[i][j];
        }
    }
    func(0,0,R,C,matrix1,matrix2);
}