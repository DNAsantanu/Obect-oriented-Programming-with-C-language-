#include<iostream>
#include<math.h>
#include<iomanip>
#include <cassert>
using namespace std;

//overloading the "multiply" function :



//This is used for printing of a matrix:
double print_matrix(double** A,int A_row,int B_col){
    for(int i =0;i<A_row;i++){
        for (int j=0;j<B_col;j++){
            cout<<A[i][j]<<" ";
            }
            cout<<endl;
    }return 0;
    }
//This is used for printing of a row vector (or one dimensional array)["print_matrix" function is also overload]:
double print_matrix(double* A,int B_col,int A_row=1){
       for (int i=0;i<B_col;i++){
            cout<<A[i]<<" ";
            }
            cout<<endl;
    return 0;
    }  
//This is used for printing of a column vector[function overloading]:
double print_matrix(int A_row,double* A,int B_col=1){
       for (int j=0;j<A_row;j++){
            cout<<A[j]<<endl;
       }
    return 0;
    }        

//This function is used to create a 2D array or Matrix:
double** createMatrix(int rows, int cols) {
    double** matrix = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new double[cols];
    }
    return matrix;
}

//This is used for multiplying 2 matrix:
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

//This is used for multiplying a matrix with a vector from right hand side:
double* multiply(double* A, int A_col,double** B,int B_row,int B_col,int A_row=1){
    
    double C[B_col];
    assert(A_col == B_row);
    if (A_col==B_row){
        for(int k=0;k<B_col;k++){
            int re=0;
        for (int j=0;j<B_row;j++){
            re+=A[j]*B[j][k];
        } C[k]=re;  
    
    }
    }
    print_matrix(C,B_col);
    return 0;

}

//This is used for multiplying a matrix with a vector from left hand side:
double* multiply(double** A,int A_row, int A_col,double* B,int B_row,int B_col=1){
    
    double C[B_col];
    assert(A_col == B_row);
    if (A_col==B_row){
        for (int i=0;i<A_row;i++){
            double re=0;
        for (int j=0;j<B_row;j++){
            re+=A[i][j]*B[j];
        } C[i]=re;  
    }
    }
    print_matrix(A_row,C);
    return 0;
}

//This is used for multiplying a matrix with a scalar from right hand side:
double** multiply(double** A,int A_row, int A_col,int B){
    
   double** C=createMatrix(A_row,A_col);
    for (int i=0;i<A_row;i++){   
        for (int j=0;j<A_col;j++){
            C[i][j]=A[i][j]*B;
        }   
    }
    print_matrix(C,A_row,A_col);
    return 0;
}

//This is used for multiplying a matrix with a vector from left hand side:
double** multiply(int A,double** B,int B_row, int B_col){
    
   double** C=createMatrix(B_row,B_col);
    for (int i=0;i<B_row;i++){   
        for (int j=0;j<B_col;j++){
            C[i][j]=A*B[i][j];
        }   
    }
    print_matrix(C,B_row,B_col);
    return 0;
}




int main(){
    //the matrix A:
    double arr1[3][3]={{1,1,1},
                     {1,1,1},
                     {1,1,1}};               
    //the matrix B:
    double arr2[3][3]={{1,1,1},
                     {1,1,1},
                     {1,1,1}};
    //the vector :
    double d[3]={1,1,1};  

    //the scalar:                 
    int c=2;

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

//matrix-matrix multiplication:
    cout<<"matrix-matrix multiplication:"<<endl;
    double** re1= multiply(A,A_row,A_col,B,B_row,B_col);
    cout<<endl;

//calculating the number of column of an one array or vector arr3:
    int d_col =sizeof(d)/sizeof(d[0]);
    cout<<endl;
//vector-matrix multiplication:
    cout<<"vector-matrix multiplication:"<<endl;
    double* re2= multiply(d,d_col,B,B_row,B_col);
    cout<<endl;
//matrix-vector multiplication:
    cout<<"matrix-vector multiplication:"<<endl;
    double* re3= multiply(A,A_row,A_col,d,d_col);
    cout<<endl;
//matrix-scalar multiplication:
    cout<<"matrix-scalar multiplication:"<<endl;
    double** re4=multiply(A,A_row,A_col,c);
    cout<<endl;
//scalar-matrix multiplication:
    cout<<"scalar-matrix multiplication:"<<endl;   
    double** re5=multiply(c,A,A_row,A_col);
    cout<<endl;

    return 0;
}
