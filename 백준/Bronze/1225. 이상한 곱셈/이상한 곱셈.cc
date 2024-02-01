/* 이상한 곱셈 */
// 변수로 된 크기만큼 배열 할당하려면 동적 할당
// 1차원일 경우
// 자료형 *배열명 = new 자료형[크기];
// 2차원일 경우
// 자료형 **배열명 = new 자료형*[세로크기];
// 자료형 배열명[세로크기] = new 자료형[가로크기];

// 삼항연산자 a = (조건) ? c : d;

// string str = "";  // str 초기화

// str.size()   // 문자열 배열 크기
// str = stoi(str)   // 문자열 정수형 변환
// 문자열 말고 문자의 정수형 변환은 '0'만 빼주면 됨
// str.erase(제거영역의 시작인덱스, 제거영역 길이)   // 문자열 일부 삭제
#include <string>

// abs()   // int형의 절댓값함수
#include <cstdlib>

#include <iostream>
#include <vector>
using namespace ::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;

    long long pro = 0;
    int lena = a.size();
    int lenb = b.size();

    for (int i=0; i<lena; i++) {
        for (int j=0; j<lenb; j++) {
            pro += (a[i] - '0') * (b[j] - '0');
        }
    }

    cout << pro << endl;
    return 0;
}