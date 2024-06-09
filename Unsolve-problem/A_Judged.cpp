#include <bits/stdc++.h>

using namespace std;



int countLikedJudges(int R[]) {
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (R[i] == 1) {
            count++;
        }
    }
    return count;
}


bool isQualified(int R[]) {
    int likedCount = countLikedJudges(R);
    return likedCount >= 4;
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int R[5];
        for (int i = 0; i < 5; i++) {
            cin >> R[i];
        }
        
        if (isQualified(R)) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }

    return 0;
}