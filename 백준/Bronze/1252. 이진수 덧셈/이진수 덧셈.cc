/* 이진수 덧셈 */
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

    string in1, in2;
    cin >> in1 >> in2;

    int longlen, shortlen;
    if (in1.size() > in2.size()) {
        longlen = in1.size();
        shortlen = in2.size();
    } else {
        longlen = in2.size();
        shortlen = in1.size();
    }

    string out[longlen + 1];
    int counter = 0;
    int sum;

    for (int i=longlen; i>0; i--) {
        if (longlen == in1.size()) {
            if (i > longlen-shortlen) { 
                sum = counter + (in1[i-1] - '0') + (in2[i-longlen+shortlen-1] - '0');
            } else {
                sum = counter + (in1[i-1] - '0');
            }
        } else if (longlen == in2.size()) {
            if (i > longlen-shortlen) { 
                sum = counter + (in1[i-longlen+shortlen-1] - '0') + (in2[i-1] - '0');
            } else {
                sum = counter + (in2[i-1] - '0');
            }
        }

        if (sum >= 2) {
            counter = 1;
            out[i] = sum - 2 + '0';
        } else {
            counter = 0;
            out[i] = sum + '0';
        }
    }
    if (counter == 1) {
        out[0] = 1 + '0';
    } else {
        int zerokiller=1;
        while ((out[zerokiller] == "0") & (zerokiller < longlen)) {
            out[zerokiller++] = "";
        }
    }

    for (int i=0; i<longlen+1; i++) {
        cout << out[i];
    }
    cout << endl;

    return 0;
}