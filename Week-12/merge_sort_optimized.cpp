#include <bits/stdc++.h>
using namespace std;
vector<int> temp(100000);
void merge(vector<int>& arr,int si,int ei){
    int mid=si+(ei-si)/2;
    int i=si,j=mid+1,k=0;
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=ei){
        temp[k++]=arr[j++];
    }
    int t=si;
    for(int i=0;i<ei-si+1;i++){
        arr[t]=temp[i];
        t++;
    }
}
void mergesort(vector<int>& arr,int si,int ei){
    //base case if 0/1 el 
    if(si>=ei) return;
    int mid=si+(ei-si)/2;
    mergesort(arr,si,mid);
    mergesort(arr,mid+1,ei);
    merge(arr,si,ei);
}
int main(){
    int n;
    cout<<"enter size of arr";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}