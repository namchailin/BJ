/* 킹 */
#include <iostream>
#include <vector>
#include <string>  // string str의 배열 크기 str.size()
using namespace::std;

void move(string& king, string& stone, string tmp) {
    if ((tmp == "R") & (king[0] != 'H')) {
        king[0]++;
        if (king == stone) {
            if (king[0] != 'H') {
                stone[0]++;
            } else {
                king[0]--;
            }
        }
    } else if ((tmp == "L") & (king[0] != 'A')) {
        king[0]--;
        if (king == stone) {
            if (king[0] != 'A') {
                stone[0]--;
            } else {
                king[0]++;
            }
        }
    } else if ((tmp == "B") & (king[1] != '1')) {
        king[1]--;
        if (king == stone) {
            if (king[1] != '1') {
                stone[1]--;
            } else {
                king[1]++;
            }
        }
    } else if ((tmp == "T") & (king[1] != '8')) {
        king[1]++;
        if (king == stone) {
            if (king[1] != '8') {
                stone[1]++;
            } else {
                king[1]--;
            }  
        }
    } else if ((tmp == "RT") & (king[0] != 'H') & (king[1] != '8')) {
        king[0]++;
        king[1]++;
        if (king == stone) {
            if ((king[0] != 'H') & (king[1] != '8')) {
                stone[0]++;
                stone[1]++;
            } else {
                king[0]--;
                king[1]--;
            }
        }
    } else if ((tmp == "LT") & (king[0] != 'A') & (king[1] != '8')) {
        king[0]--;
        king[1]++;
        if (king == stone) {
            if ((king[0] != 'A') & (king[1] != '8')) {
                stone[0]--;
                stone[1]++;
            } else {
                king[0]++;
                king[1]--;
            }
        }
    } else if ((tmp == "RB") & (king[0] != 'H') & (king[1] != '1')) {
        king[0]++;
        king[1]--;
        if (king == stone) {
            if ((king[0] != 'H') & (king[1] != '1')) {
                stone[0]++;
                stone[1]--;
            } else {
                king[0]--;
                king[1]++;
            }
        }
    } else if ((tmp == "LB") & (king[0] != 'A') & (king[1] != '1')) {
        king[0]--;
        king[1]--;
        if (king == stone) {
            if ((king[0] != 'A') & (king[1] != '1')) {
                stone[0]--;
                stone[1]--;
            } else {
                king[0]++;
                king[1]++;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string king;
    string stone;
    int n;

    cin >> king >> stone >> n;

    string tmp;
    for (int i=0; i<n; i++) {
        cin >> tmp;
        move(king, stone, tmp);
    }

    cout << king << endl;
    cout << stone << endl;

    return 0;
}