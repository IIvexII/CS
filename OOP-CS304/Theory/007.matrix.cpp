/*
    Write down a complete program for two dimensional array, use functions,
    read and print array, add two matrices, print the sum, write down another
    program to calculate transpose of the matrix.
*/

#include <iostream>
using namespace std;

// Prototype
void add(int matrix1[2][3], int matrix2[2][3],int result[2][3]);
void transpose(int matrix[2][3], int result[3][2]);
void printMatrix(int matrix[2][3]);
void printMatrix(int matrix[3][2]);

int main(){
    int m1[2][3]={
                        {2,5,4},
                        {5,8,4}
                    },
        m2[2][3]={
                        {2,5,4},
                        {5,8,4}
                    };
    int addResult[2][3], transposeResult[3][2];
    cout << "ADD 2 Matrices" << endl;
    add(m1,m2,addResult);
    printMatrix(addResult);
    cout << "Transpose of a Matrix" << endl;
    transpose(m1, transposeResult);
    printMatrix(transposeResult);

}

void add(int matrix1[2][3], int matrix2[2][3],int result[2][3]){
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
}
void transpose(int matrix[2][3], int result[3][2]){
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            result[j][i]=matrix[i][j];
        }
    }
}
void printMatrix(int matrix[2][3]){
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}
void printMatrix(int matrix[3][2]){
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}