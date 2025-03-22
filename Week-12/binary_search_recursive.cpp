#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>& arr,int low,int high,int target){
    if(low>high) return -1;
    int mid=low+(high-low)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        return binarysearch(arr,low,mid-1,target);
    }
    else return binarysearch(arr,mid+1,high,target);
}
int main(){
    int n;
    cout<<"enter size of arr";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cout<<"enter target";
    cin>>target;
    int ans=binarysearch(arr,0,n-1,target);
    if(ans==-1){
        cout<<"Not found";
        return 0;
    }
    else{
        cout<<"Target found at "<<ans;
        return 0;
    }
    
}