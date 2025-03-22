#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr,int si,int ei){
    //assuming start index to be pivot el
    int cnt=0; //keeps count of elements smaller than pivot
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<arr[si]){
            cnt++;
        }
    }
    int partitionindex=si+cnt;
    //swapping partition index and si
    swap(arr[si],arr[partitionindex]);
    int i=si,j=partitionindex+1;
    while(i<partitionindex && j<=ei){
        if(arr[i]<arr[partitionindex]){
            i++;
            continue;
        }
        if(arr[j]>=arr[partitionindex]){
            j++;
            continue;
        }
        //swapping el at i and j
        swap(arr[i],arr[j]);
        i++;
        j++;
    }
    return partitionindex;
}
void quicksort(vector<int>& arr,int si,int ei){
    //base case of 0/1 el
    if(si>=ei) return;
    int pivot=partition(arr,si,ei);
    quicksort(arr,si,pivot-1);
    quicksort(arr,pivot+1,ei);
}
int main(){
    int n;
    cout<<"enter size of arr";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}