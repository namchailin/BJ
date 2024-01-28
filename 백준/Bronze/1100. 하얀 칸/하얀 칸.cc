/* 하얀 칸 */
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
using namespace ::std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string c[8];
    for (int i=0; i<8; i++) {
        cin >> c[i];
    }

    int num=0;
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (((i%2 == 0) & (j%2 == 0)) | ((i%2 != 0) & (j%2 != 0))) {
                if (c[i][j] == 'F') {
                    num++;
                }
            }
        }
    }

    cout << num << endl;

    return 0;
}