#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of arr";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    multiset<int> set1;
    set1.insert(arr[0]);
    int invcount = 0;
    multiset<int>::iterator itset1;
    for(int i=1;i<n;i++){
        set1.insert(arr[i]);
        auto itset1=set1.upper_bound(arr[i]);
        invcount += distance(itset1, set1.end()); 
    }
    cout<<invcount;
    return 0;
}