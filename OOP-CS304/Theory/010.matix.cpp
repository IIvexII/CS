/*
    Task: create a class matrix (x[5][5],row,col) write down constructors,
          getmethod, show method,  add a method to calculate sum of two matrices.
*/
#include <iostream>
using namespace std;

class Matrix{
    private:
        int matrix1[5][5], matrix2[5][5];
    public:
        Matrix(){ }
        Matrix(int m1[5][5], int m2[5][5]);
        void getMatrices(int m1[5][5], int m2[5][5]);
        void showMatrix(int matrixNum);
        void showMatrices();
        void add();
        void arrCopy(int array[5][5],int matrixNum);
};
int main(){
    Matrix m1;
    int a1[5][5]={5,8,4,8,9,4,54,45,48,45,45,45,48,5,8,4,7,4,5,6,5,4,7,4,1},
        a2[5][5]={1,5,78,2,9,4,54,45,48,45,75,45,48,5,8,4,7,4,5,6,8,4,7,4,1};

    m1.getMatrices(a1,a2);
    m1.showMatrices();
    m1.add();
    return 0;
}

Matrix::Matrix(int m1[5][5], int m2[5][5]){
    arrCopy(m1,1);
    arrCopy(m2,2);
}

void Matrix::getMatrices(int m1[5][5], int m2[5][5]){
    arrCopy(m1,1);
    arrCopy(m2,2);
}

void Matrix::showMatrices(){
    cout << "Matrix 1: " << endl;
    showMatrix(1);
    cout << "Matrix : " << endl;
    showMatrix(2);
}

void Matrix::showMatrix(int matrixNum){
    for(int i=0; i<5; i++){
        for(int j=0;j<5; j++){
            if(matrixNum==1)
                cout << matrix1[i][j] << " ";
            else
                cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
}

void Matrix::add(){
    int result[5][5];
    for(int i=0; i<5; i++){
        for(int j=0;j<5; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Addition: " << endl;;
    for(int i=0; i<5; i++){
        for(int j=0;j<5; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
}

void Matrix::arrCopy(int array[5][5],int matrixNum){
    for(int i=0; i<5; i++){
        for(int j=0;j<5; j++){
            if(matrixNum==1)
                matrix1[i][j] = array[i][j];
            else
                matrix2[i][j] = array[i][j];
        }
    }
}