/* 쉽게 푸는 문제 */
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
using namespace ::std;

int sum(int tmp) {
    int sum=0;
    for (int i=1; i<tmp; i++) {
        sum += i;
    }
    return sum + 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    int pos = 1;
    int num = 1;
    while (pos + num <= a) {
        pos += num;
        num++;
    }

    int sum = (- (a - pos) * num);
    while (pos + num <= b) {
        sum += num*num;
        pos += num;
        num++;
    }
    sum += (b - pos + 1) * num;

    cout << sum << endl;

    return 0;
}