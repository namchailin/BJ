/* 요세푸스 문제 */
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

    int n, k;
    cin >> n >> k;

    int c[n], p[n];
    for (int i=0; i<n; i++) {
        c[i] = i+1;
    }

    int cnt; 
    int c_idx = 0;
    for (int p_idx = 0; p_idx<n; p_idx++) {
        cnt = 0;
        // cnt가 k만큼 채워지면 배열 c의 해당 요소를 배열 p에 저장
        while (1) { 
            if (c_idx == n) {
                c_idx = 0;
            }
            if (c[c_idx] != 0) {
                cnt++;
            }
            if (cnt != k) {
                c_idx++;
            } else {
                break;
            }
        }
        p[p_idx] = c[c_idx];
        c[c_idx] = 0;
    }

    cout << "<";
    for (int i=0; i<n-1; i++) {
        cout << p[i] << ", ";
    }
    cout << p[n-1] << ">" << endl; 

    return 0;
}