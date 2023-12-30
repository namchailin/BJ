/* 네 번째 점 */
#include <iostream>
#include <vector>
using namespace::std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int p1[2], p2[2], p3[2], p4[2];
    cin >> p1[0] >> p1[1];
    cin >> p2[0] >> p2[1];
    cin >> p3[0] >> p3[1];

    for (int i=0; i<2; i++) {
        if (p1[i] == p2[i]) {
            p4[i] = p3[i];
        } else if (p1[i] == p3[i]) {
            p4[i] = p2[i];
        } else {
            p4[i] = p1[i];
        }
    }

    cout << p4[0] << " " << p4[1] << endl;
    
    return 0;
}