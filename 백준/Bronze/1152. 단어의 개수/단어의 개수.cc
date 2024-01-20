/* 단어의 개수 */
#include <iostream>
#include <vector>
#include <string> // string str의 배열 크기 str.size()
using namespace ::std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string input;
    getline(cin, input);

    int cnt = 0;
    int len = input.size();

    if (input[0] != ' ') {
        cnt++;
    }
    for (int i=1; i<len; i++) {
        if ((input[i-1] == ' ') & (input[i] != ' ')) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}