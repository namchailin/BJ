/* 숫자 정사각형 */
// 변수로 된 크기만큼 배열 할당하려면 동적 할당
// < 1차원일 경우 >
// 자료형 *배열명 = new 자료형[크기];
// delete[] 배열명
// < 2차원일 경우 >
// 자료형 **배열명 = new 자료형*[세로크기];
// 배열명[세로크기] = new 자료형[가로크기];
// for (int i=0; i<세로크기; i++) {
//     delete[] 배열명[i];
// }
// delete[] 배열명;
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

    int n, m;
    cin >> n >> m;

    int **r = new int*[n];
    for (int i=0; i<n; i++) {
        r[i] = new int[m];
        string c;
        cin >> c;
        for (int j=0; j<m; j++) {
            r[i][j] = c[j] - '0';
        }
    }

    int size = 0; // 정사각형 사이즈
    int p;
    for (int j=0; j<m-1; j++) {
        for (int i=0; i<n-1; i++) {
            for (int p=n-1; p>i; p--) {
                if ((r[i][j] == r[p][j]) & ((p-i) > size) & (j+(p-i) < m)) { // 우상모서리 = 좌상모서리
                    if ((r[i][j] == r[i][j+(p-i)]) & (r[p][j] == r[p][j+(p-i)])) {
                        size = p-i;
                    }
                }
            }
        }
    }

    cout << (size + 1)*(size + 1) << endl;

    for (int i=0; i<n; i++) {
        delete[] r[i];
    }
    delete[] r;

    return 0;
}