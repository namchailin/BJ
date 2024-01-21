/* 럭키 스트레이트 */
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

    string input;
    cin >> input;

    int len = input.size();
    int i1=0, i2=0;
    for (int i=0; i<len/2; i++) {
        i1 += input[i] - '0';
    }
    
    for (int i=len/2; i<len; i++) {
        i2 += input[i] - '0';
    }
    
    if (i1 == i2) {
        cout << "LUCKY" << endl;
    } else {
        cout << "READY" << endl;
    }

    return 0;
}