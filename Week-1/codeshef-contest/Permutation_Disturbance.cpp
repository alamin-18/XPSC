#include <iostream>
#include <vector>

using namespace std;

int minOperations(vector<int>& permutation) {
    int operations = 0;
    int n = permutation.size();

    for (int i = 0; i < n; i++) {
        if (permutation[i] == i + 1)
            operations++;
    }

    return (operations == n) ? 0 : 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> permutation(n);
        for (int i = 0; i < n; i++) {
            cin >> permutation[i];
        }

        cout << minOperations(permutation) << endl;
    }

    return 0;
}
