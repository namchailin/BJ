/* 임시 반장 정하기 */
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;  // 반의 학생 수
    cin >> n;
    int **table = new int*[n];  // 학생 정보 테이블
    for (int i=0; i<n; ++i) {
        table[i] = new int[5];
        for (int j=0; j<5; j++) {
            cin >> table[i][j];
        }
    }

    int bumped_n[n]; // 학생별 겹쳤던 학생 수
    for (int i=0; i<n; i++) {
        bumped_n[i] = 0;
    }
    int duplicated_n[n];  // 이전에 겹친 적 있는 학생 리스트

    for (int i=0; i<n; i++) {  // 학생별 순환
        for (int i_idx=0; i_idx<n; i_idx++) {
            duplicated_n[i_idx] = 0;
        }
        for (int j=0; j<5; j++) {  // 학년별 순환
            for (int i_idx=0; i_idx<n; i_idx++) {  // 해당 학생의 학생별 순환
                if ((i != i_idx)  // 해당 학생 제외
                & (table[i][j] == table[i_idx][j])  // 해당 학생과 겹치는 학생
                & (duplicated_n[i_idx] == 0)) {  // 이전에 겹친 적 없다면
                    bumped_n[i]++;  // 해당 학생의 겹쳤던 학생 수 추가
                    duplicated_n[i_idx]++;  // 겹친 학생을 이전에 겹친 적 있는 학생 리스트에 추가
                }
            }
        }
    }

    int key = bumped_n[0];
    int temporal_leader = 1;  // 임시 반장
    for (int i=1; i<n; i++) {
        if (key < bumped_n[i]) {
            key = bumped_n[i];
            temporal_leader = i+1;
        }
    }

    cout << temporal_leader << endl;

    for (int i=0; i<n; ++i) {
        delete[] table[i];
    }
    delete[] table;

    return 0;
}