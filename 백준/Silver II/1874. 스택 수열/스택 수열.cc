/* 스택 수열 */
// 변수 크기만큼 배열 선언하려면 동적할당
// < 1차원일 경우 >
// 자료형 *배열명 = new 자료형[크기];
// delete[] 배열명;
// < 2차원일 경우 >
// 자료형 **배열명 = new 자료형*[세로크기];
// for (int i=0;i<n;++i) { 배열명[세로크기] = new 자료형[가로크기]; }
// for (int i=0;i<세로크기;++i) { delete[] 배열명[i]; } delete[] 배열명;

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
// stack<자료형> stack;  // 스택 초기화
// stack.push(요소);  // 스택에 데이터 추가
// stack.pop();  // 스택에 데이터 삭제
// stack.top();  // 스택의 입출구 데이터 반환
// stack.size();  // 스택의 크기
// stack.empty();
#include <stack>
using namespace ::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int *seq = new int[n];  // 우리가 만들어야 하는 수열
    for (int i=0; i<n; i++) {  
        cin >> seq[i];
    }

    stack<int> stk;
    vector<char> act;
    int stk_i = 1;
    for (int i=0; i<n; i++) {
        if (stk.empty() != 0) {  // 스택이 비어있다면 일단 push
            stk.push(stk_i);
            stk_i++;
            act.push_back('+');
        }
        while (stk.top() != seq[i]) {  // 원하는 수 나올 때까지 push
            stk.push(stk_i);
            stk_i++;
            act.push_back('+');
            if (stk_i - 1 > n) {
                cout << "NO" << "\n";
                return 0;
            }
        }
        if (stk.top() == seq[i]) {  // 원하는 수 나오면 pop
            stk.pop();
            act.push_back('-');
        }
    }

    int act_len = act.size();
    for (int i=0; i<act_len; i++) {
        cout << act[i] << "\n";
    }

    delete[] seq;

    return 0;
}