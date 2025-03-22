#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter target";
    cin>>target;
    int si=0;
    int ei=n-1;
    while(si<=ei){
        int mid=si+(ei-si)/2;
        if(arr[mid]==target){
            cout<<"Found at index "<<mid;
            return 0;
        }
        else if(arr[mid]>target){
            ei=mid-1;
        }
        else{
            si=mid+1;
        }
    }
    cout<<"Not found";
    return 0;
}