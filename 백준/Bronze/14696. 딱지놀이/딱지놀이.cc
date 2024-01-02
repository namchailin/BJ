/* 딱지놀이 */
#include <iostream>
#include <vector>
using namespace::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    
    int ar[N][4];
    int br[N][4];

    for (int i=0; i<N; i++) {
        for (int j=0; j<4; j++) {
            ar[i][j] = 0;
            br[i][j] = 0;
        }
    }

    // 라운드별로 승부 입력
    int a, b;
    int what;
    for (int i=0; i<N; i++) {
        cin >> a;
        for (int j=0; j<a; j++) {
            cin >> what;
            if (what == 4) {
                ar[i][0]++;
            } else if (what == 3) {
                ar[i][1]++;
            } else if (what == 2) {
                ar[i][2]++;
            } else {
                ar[i][3]++;    
            }
        }
        cin >> b;
        for (int j=0; j<b; j++) {
            cin >> what;
            if (what == 4) {
                br[i][0]++;
            } else if (what == 3) {
                br[i][1]++;
            } else if (what == 2) {
                br[i][2]++;
            } else {
                br[i][3]++;    
            }
        }
    }

    // 라운드별로 승부 계산 및 출력
    for (int i=0; i<N; i++) {
        if (ar[i][0] != br[i][0]) {
            if (ar[i][0] > br[i][0]) {
                cout << 'A' << endl;
            } else {
                cout << 'B' << endl;
            }
        } else if (ar[i][1] != br[i][1]) {
            if (ar[i][1] > br[i][1]) {
                cout << 'A' << endl;
            } else {
                cout << 'B' << endl;
            }
        } else if (ar[i][2] != br[i][2]) {
            if (ar[i][2] > br[i][2]) {
                cout << 'A' << endl;
            } else {
                cout << 'B' << endl;
            }
        } else if (ar[i][3] != br[i][3]) {
            if (ar[i][3] > br[i][3]) {
                cout << 'A' << endl;
            } else {
                cout << 'B' << endl;
            }
        } else {
            cout << 'D' << endl;
        }
    }

    return 0;
}