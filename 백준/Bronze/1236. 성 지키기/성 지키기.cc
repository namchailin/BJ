/* 성 지키기 */
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

    int n, m;
    cin >> n >> m;

    char man[n][m];
    int row[n], col[m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> man[i][j];
            row[i] = 0; 
            col[j] = 0;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (man[i][j] == 'X') {
                row[i]++; 
                col[j]++;
            }
        }
    }

    int cnt0_row = 0;
    int cnt0_col = 0;
    for (int i=0; i<n; i++) {
        if (row[i] == 0) {
            cnt0_row++;
        }
    }
    for (int j=0; j<m; j++) {
        if (col[j] == 0) {
            cnt0_col++;
        }
    }

    int howmanyman = (cnt0_row > cnt0_col) ? cnt0_row : cnt0_col;
    cout << howmanyman << endl;

    return 0;
}