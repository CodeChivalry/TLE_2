#include<iostream>
using namespace std;
long long func(int n){
    if(n==1) return 1;
    else if(n%2!=0) return 1+func(3*n+1);
    else return 1+func(n/2);
}
int main(){
    int n;
    cin>>n;
    cout<<func(n);
}