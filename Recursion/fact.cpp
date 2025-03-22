#include <iostream>
using namespace std;
long long factorial(int x){
    if(x==1 || x==0) return 1;
    return x*factorial(x-1);
}
int main(){
    int num;
    cin>>num;
    cout<<factorial(num);
}