#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int M, i, j;
    cin >> M;
    const int weidth = 80, N = M;
    double matrix[M][M];

    for (i = 0; i < N; i++) {
        for (j = 0; j < 2; j++) {
            matrix[i][j] = 1;
        }
    }
    for (j = 2; j < N; j++) {
        matrix[0][j] = 1.0;
        matrix[1][j] = matrix[1][j - 1] / j;
    }
    for (j = 2; j < N; j++) {
        matrix[2][j] = matrix[1][j] * matrix[1][j];
    }
    double qq;
    for (j = 2; j < N; j++) {
        qq = matrix[1][j];
        for (i = 3; i < N; i++) {
            matrix[i][j] = matrix[i - 1][j] * qq;
        }
    }

    int p = weidth / N;
    if (p > 7) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                cout << left << scientific << setprecision(p - 7) << setw(p) << matrix[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}