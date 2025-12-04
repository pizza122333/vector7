#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 첫 번째 행렬 A
    vector<vector<int>> A = {
        {2, 4},
        {5, -5}
    };

    // 두 번째 행렬 B
    vector<vector<int>> B = {
        {-2, 3},
        {0, -5}
    };

    // 결과 행렬 C (A와 같은 크기로 0으로 초기화)
    vector<vector<int>> C(2, vector<int>(2, 0));

    // 행렬 덧셈 수행
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // 결과 출력
    cout << "연산결과:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
