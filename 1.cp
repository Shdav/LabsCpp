#include <iostream>
#include <fstream>

using namespace std;
void in_matrix(int** matrix, int n, istream &file) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++){
            file >> matrix[j][i];
        }
    }
}
void cout_matrix(int** matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void preobr_matrix(int** matrix, int n){
    int l = n - 1;
    for (int j = 0; j < n; j++) {
        int m = matrix[j][0];
        for (int i = 0; i < n; i++) {
            if (m > matrix[j][i]){
                m = matrix[j][i];
            }
        }
        matrix[j][l] = m;
        l--;
    }
}
int main(){
    int N;
    ifstream in("/Users/alex/CLionProjects/ekz/input.txt");
    if(!in) return 1;
    in >> N;
    int** matrix = new int* [N];
    for (int i = 0; i < N; i++) {
        matrix[i] = new int[N];
    }
    in_matrix(matrix, N, in);
    cout_matrix(matrix, N);
    preobr_matrix(matrix, N);
    cout << endl;
    cout_matrix(matrix, N);
    for (int i = 0; i < N; ++i)
        delete[]matrix[i];
}