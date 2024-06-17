#include<iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int **mat;

public:
    // Constructor to initialize matrix dimensions and allocate memory
    Matrix(int r, int c) : rows(r), cols(c) {
        mat = new int*[rows];
        for(int i = 0; i < rows; ++i) {
            mat[i] = new int[cols];
        }
    }

    // Destructor to deallocate memory
    ~Matrix() {
        for(int i = 0; i < rows; ++i) {
            delete[] mat[i];
        }
        delete[] mat;
    }

    // Function to input matrix data
    void inputMatrix() {
        cout << "Enter matrix elements row by row:" << endl;
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                cin >> mat[i][j];
            }
        }
    }

    // Function to display matrix data
    void displayMatrix() {
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to add two matrices
    Matrix add(Matrix &m) {
        Matrix result(rows, cols);
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for the matrices:" << endl;
    cin >> rows >> cols;

    Matrix mat1(rows, cols), mat2(rows, cols);

    cout << "Input for matrix 1:" << endl;
    mat1.inputMatrix();

    cout << "Input for matrix 2:" << endl;
    mat2.inputMatrix();

    Matrix result = mat1.add(mat2);

    cout << "Resultant matrix after addition:" << endl;
    result.displayMatrix();

    return 0;
}
