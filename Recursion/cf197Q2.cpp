#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n,vector<int>(n));
        for(int i=0;i<n;i++) {
            string row;
            cin>>row; 
            for(int j=0; j<n;j++) {
                adj[i][j]=row[j]-'0'; 
            }
        }
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = i; 
        }
        for (int i = 0; i < n; i++) {
            int j = i-1;
            while (j >= 0 && adj[arr[j]][arr[j+1]] == 0) {
                swap(arr[j], arr[j+1]); 
                j--;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] + 1 << ' ';
        }
        cout << endl;
    }
    return 0;
}
