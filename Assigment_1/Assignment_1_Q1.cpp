#include<iostream>
#include<math.h>
#include<iomanip>
#include <cassert>
using namespace std;


//function for printing the matrix:
double print_matrix(double** arr1,int A_row,int B_col){
    for(int i =0;i<A_row;i++){
        for (int j=0;j<B_col;j++){
            cout<<arr1[i][j]<<" ";
            }
            cout<<endl;
    }return 0;
    }
//function for creating an 2D-array or a matrix:
double** createMatrix(int rows, int cols) {
    double** matrix = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new double[cols];
    }
    return matrix;
}    

//multiply function for matrix A and B:
double** multiply(double** A,int A_row, int A_col,double** B,int B_row,int B_col){
    
    double** C=createMatrix(A_row,B_col);
    assert(A_col == B_row);
    if (A_col==B_row){
        for(int k=0;k<B_col;k++){
        for (int i=0;i<A_row;i++){
            double re=0;
        for (int j=0;j<B_row;j++){
            re+=A[i][j]*B[j][i];
        } C[i][k]=re;  
    }
    }
    }
    print_matrix(C,A_row,B_col);
    return 0;
}

int main(){
    double arr1[3][3]={{1,1,1},
                     {1,1,1},
                     {1,1,1}};                

    double arr2[3][3]={{1,1,1},
                     {1,1,1},
                     {1,1,1}};
//calculating the number of rows and number of columns of A and B:
    int A_row =sizeof(arr1)/sizeof(arr1[0]);
    int A_col =sizeof(arr1[0])/sizeof(arr1[0][0]);
    int B_row =sizeof(arr2)/sizeof(arr2[0]);
    int B_col =sizeof(arr2[0])/sizeof(arr2[0][0]);
 //allocation the matrix elements to dynamic 2d-array[conversion from static to dynamic 2d array]:
    double** A = createMatrix(A_row, A_col);
    double** B = createMatrix(B_row, B_col); 
    
    for (int i = 0; i < A_row; ++i) {
        for (int j = 0; j < A_col; ++j) {
            A[i][j] = arr1[i][j];
        }
    };
    for (int i = 0; i < B_row; ++i) {
        for (int j = 0; j < B_col; ++j) {
            B[i][j] = arr2[i][j];
        }
    };
    cout<<"multiplication of matrix A and matrix B:"<<endl;
    double** C= multiply(A,A_row,A_col,B,B_row,B_col);
    return 0;
}
