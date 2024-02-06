/*  */
// 변수로 된 크기만큼 배열 할당하려면 동적 할당
// 1차원일 경우
// 자료형 *배열명 = new 자료형[크기];
// 2차원일 경우
// 자료형 **배열명 = new 자료형*[세로크기];
// 자료형 배열명[세로크기] = new 자료형[가로크기];

// a = (조건) ? c : d;  // 삼항연산자

// string str = "";  // str 초기화

// str.size()   // 문자열 배열 크기
// str = stoi(str)   // 문자열 정수형 변환
// 문자열 말고 문자의 정수형 변환은 '0'만 빼주면 됨
// str.erase(제거영역의 시작인덱스, 제거영역 길이)   // 문자열 일부 삭제
#include <string>
// abs()   // int형의 절댓값함수
#include <cstdlib>
#include <iostream>
// v.size()  // 벡터 크기
#include <vector>
using namespace ::std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<string> answer;
    string input;
    int input_len;
    while (1) {
        cin >> input;
        if (input != "0") {
            input_len = input.size();
            int idx=0;
            while (idx < input_len/2) {
                if (input[idx] != input[input_len - idx - 1]) {
                    answer.push_back("no");
                    break;
                }
                idx++;
            }
            if (idx == input_len/2) {
                answer.push_back("yes");
            }
        } else {
            break;
        }
    }

    int answer_len = answer.size();
    for (int i=0; i<answer_len; i++) {
        cout << answer[i] << endl;
    }

    return 0;
}