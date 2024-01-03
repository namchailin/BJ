/* 단어 공부 */
#include <iostream>
#include <vector>
using namespace::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string ap;
    cin >> ap;

    int len=0;
    while (ap[len] != 0) {
        len++;
    }
    len++;

    int cnt[26];
    for (int i=0; i<26; i++) {
        cnt[i]=0;
    }

    // 입력받은 배열 ap를 배열 cnt에 정리
    int what;
    for (int i=0; i<len; i++) {
        if (ap[i] < 91) {
            what = ap[i] - 65;
        } else {
            what = ap[i] - 97;
        }
        cnt[what]++;
    }

    // 배열 cnt를 정렬해서 key 찾기
    int key=0;
    for (int i=1; i<26; i++) {
        if (cnt[i] > cnt[key]) {
            key=i;
        }
    }

    // key 중복이면 ? 출력
    for (int i=0; i<key; i++) {
        if (cnt[i] == cnt[key]) {
            cout << '?' << endl;
            return 0;
        }
    }
    for (int i=key+1; i<26; i++) {
        if (cnt[i] == cnt[key]) {
            cout << '?' << endl;
            return 0;
        }
    }

    // key 중복 없으면 출력
    char answer = char(key + 65);
    cout << answer << endl;

    return 0;
}