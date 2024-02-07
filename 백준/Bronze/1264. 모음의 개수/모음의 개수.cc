/* 모음의 개수 */
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
// string input; getline(cin, input);  // 문자열 줄단위 입력
#include <iostream>
// v.size()  // 벡터 크기
#include <vector>
using namespace ::std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string input;
    int input_len;
    vector<int> outputs;
    int output;
    while (1) {
        getline(cin, input);
        if (input != "#") {
            output = 0;
            input_len = input.size();
            for (int i=0; i<input_len; i++) {
                if ((input[i] == 'a') | (input[i] == 'A') 
                | (input[i] == 'e') | (input[i] == 'E') 
                | (input[i] == 'i') | (input[i] == 'I') 
                | (input[i] == 'o') | (input[i] == 'O') 
                | (input[i] == 'u') | (input[i] == 'U')) {
                    output++;
                }
            }
            outputs.push_back(output);
        } else {
            break;
        }
    }

    int outputs_len = outputs.size();
    for (int i=0; i<outputs_len; i++) {
        cout << outputs[i] << endl;
    }

    return 0;
}