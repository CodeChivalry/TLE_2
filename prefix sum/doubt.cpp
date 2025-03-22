#include <bits/stdc++.h>

using namespace std;

string intToBinary(int n, int N) {
    string binary = "";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }
    while (binary.length() < N) {
        binary = "0" + binary;
    }
    return binary;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;

        int C = stoi(A, nullptr, 2);
        int D = stoi(B, nullptr, 2);

        int E = C | D;
        int F = C & D;

        string P = intToBinary(E, N);
        string Q = intToBinary(F, N);

        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < N; i++) {
            sum1 += P[i] - '0';
            sum2 += Q[i] - '0';
        }

        if (sum1 % 2 != 0 || sum2 % 2 != 0) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }
    
    return 0;
}
