/* 노 땡스! */
#include <iostream>
#include <vector>
using namespace::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    
    int num[N];
    for (int i=0; i<N; i++) {
        cin >> num[i];
    }

    int sum=num[0];
    for (int i=1; i<N; i++) {
        if (num[i-1]+1 != num[i]) {
            sum += num[i];
        }
    }

    cout << sum << endl;

    return 0;
}