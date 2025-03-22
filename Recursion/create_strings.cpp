#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<string> result;
void func(vector<int>& freq,int size,string s,int index,string ds){
    //base case
    if(index>=size){
        result.push_back(ds);
        return;
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            freq[i]--;
            func(freq,size,s,index+1,ds+char('a'+i));
            freq[i]++;
        }
    }
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    vector<int> freq(26,0);
    for(int i=0;i<n;i++) freq[s[i]-'a']++;
    func(freq,n,s,0,"");
    cout<<result.size()<<endl;
    int y=result.size();
    for(int i=0;i<y;i++){
        cout<<result[i]<<endl;
    }
}