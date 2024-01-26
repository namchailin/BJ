/* 분수찾기 */
// 변수로 된 크기만큼 배열 할당하려면 동적 할당
// 1차원일 경우
// 자료형 *배열명 = new 자료형[크기];
// 2차원일 경우
// 자료형 **배열명 = new 자료형*[세로크기];
// 자료형 배열명[세로크기] = new 자료형[가로크기];
#include <iostream>
#include <vector>
// str.size(): 문자열 str의 배열 크기
// str = stoi(str): 문자열 str의 정수형 변환
// 문자열 말고 문자의 정수형 변환은 '0'만 빼주면 됨
#include <string>
using namespace::std;

int get_key_idx(int key) {
    int key_idx = 0;
    for (int i=0; i<key; i++) {
        key_idx += i;
    }
    return (key_idx + 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;

    int key=1;
    while (get_key_idx(key+1) <= x) {
        key++;
    }
    int idx = x - get_key_idx(key);

    int p, q; // 출력할 분자 분모
    if (key % 2 != 0) {
            p = key-idx; q = 1+idx;
    } else {
        p = 1+idx; q = key-idx;
    }

    cout << p << "/" << q << endl;

    return 0;
}