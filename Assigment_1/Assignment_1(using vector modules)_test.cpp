#include<bits/stdc++.h>
#include<math.h>
#include<vector>
// #include <iomanip>
#include<cassert>
using namespace std;

int print_matrix(vector<vector<int>> A){
    int A_row =A.size();
    int A_col =A[0].size();
    for(int i =0;i<A_row;i++){
        for (int j=0;j<A_col;j++){
            cout<<A[i][j]<<" ";
            }
            cout<<endl;
    }return 0;
    }


int print_vector(vector<int> A){
    int A_row =A.size();
    // int A_col =A[0].size();
    for(int i =0;i<A_row;i++){
            cout<<A[i]<<" ";
            }
            return 0;
    }    

vector<vector<int>> multiply( vector<vector<int>> matrixA, vector<vector<int>> matrixB){
    int A_row =matrixA.size();
    int A_col =matrixA[0].size();
    int B_row =matrixB.size();
    int B_col =matrixB[0].size();
    assert(A_col==B_row);
    vector<vector<int>> C;
    if (A_col==B_row){
        for (int i=0;i<A_row;i++){
        vector<int> ans;
        for(int k=0;k<B_col;k++){
            int re=0;
        for (int j=0;j<B_row;j++){
            re+=matrixA[i][j]*matrixB[j][k];
        }
        ans.push_back(re);  
        }C.push_back(ans);
        
    }
    }
    // else if(B_row==1 &B_col==1){
    //     for(int i =0;i<A_row;i++){
    //    for (int j=0;j<A_col;j++){
    //        C[i][j]=matrixA[i][j]*matrixB[0][0];}


    // }
    // }
    // for(int i =0;i<A_row;i++){
    //     for (int j=0;j<B_col;j++){
    //         matrixA[i][j]=C[i][j];
    //     }
    // }
    
    // cout<<C<<endl;
    
    print_matrix(C);
    return C ;


}

vector<vector<int>> multiply(vector<vector<int>> matrixA, int B){
    int A_row =matrixA.size();
    int A_col =matrixA[0].size();
    vector<vector<int>> C;
    for(int i =0;i<A_row;i++){
        vector <int> ans;
       for (int j=0;j<A_col;j++){
        int s=matrixA[i][j]*B;
        ans.push_back(s);}
    
    C.push_back(ans);
}
    
print_matrix(C);
return C ;


}




vector<vector<int>> multiply(int A,vector<vector<int>> matrixB){
    int B_row =matrixB.size();
    int B_col =matrixB[0].size();
    vector<vector<int>> C;
    for(int i =0;i<B_row;i++){
        vector <int> ans;
       for (int j=0;j<B_col;j++){
        int s=A*matrixB[i][j];
        ans.push_back(s);}
    
    C.push_back(ans);
}
    
print_matrix(C);
return C ;


}



vector<int> multiply( vector<vector<int>> matrixA, vector<int>B){
    int A_row =matrixA.size();
    int A_col =matrixA[0].size();
    int B_row =B.size();
    assert(A_col==B_row);
    vector<int> C;
    if (A_col==B_row){
        for (int i=0;i<A_row;i++){
            int re=0;
        for (int j=0;j<B_row;j++){
            re+=matrixA[i][j]*B[j];
        }
        C.push_back(re);  
        }
        }
        print_vector(C);
        return C;
}

vector<int> multiply(vector<int>A,vector<vector<int>> matrixB){
    int B_row =matrixB.size();
    int B_col =matrixB[0].size();
    int A_col =A.size();
    assert(A_col==B_row);
    vector<int> C;
    if (A_col==B_row){
        for (int k=0;k<B_col;k++){
            int re=0;
        for (int j=0;j<B_row;j++){
            re+=A[j]*matrixB[k][j];
        }
        C.push_back(re);
        }
        }
        print_vector(C);
        return C;
}



// void multify(){
    // int n;
    // cout<<"enter what multiplication you want to do\n 1 for matrix-matrix\n 2 for vector-matrix\n 3 for matirx-vector\n 4 for matrix-scalar\n 5 for Scalar-matrix"<<endl;
    // cin>>n;
    // if (n==1){
    //     cout<<"Enter the value of A"<<endl;
    //     cin>>A;
    // // }
    // switch(n){
    //     case 1:{
        //    cout<<"Enter Matrix A"<<endl;
        //    cin>>A>>endl;
        //    cout<<"Enter Matrix B"<<endl;
        //    cin>>B>>endl;
//            vector<vector<int>> r=multify_matrix(A,B);
//            break;
//            }
//         case 2:{
//             vector<int> r =row_vector_multify(d,A);
//             break;
//             }
//         case 3:{
//             vector<int> r= multify_col_vector(A,d);
//             break;
//         }
//         case 4:{
//             vector<vector<int>> r= multify_scalar(A,c);
//             break;
//         }
//         case 5:{
//             vector<vector<int>> r = scalar_multify(c,A);
//             break;
//         }
// }
// }




double pnorm(vector<double> a,double p=2.0){
    int a_size = a.size();
    double norm=0;
    for (int i=0;i<a_size; i++){
        norm+=pow(a[i],p);   
    }
    double p1=1/p;
    norm=pow(norm,p1);
    // norm=sqrt(norm);
    cout<<norm<<endl;
    return 0;
}
   

int main(){
    vector<vector<int>> A={{1,1,1},
                           {1,1,1},
                           {1,1,1}};

    
    // cin>>A;                       

    vector<vector<int>> B={{1},
                            {1},
                            {1}};
    int c=3;
    vector<int> d={2,0,0};
    vector<double> d1={3,0,0};
    pnorm(d1);
    // multify();
    // cin>>d;
    int n;
    cout<<"enter what multiplication you want to do\n 1 for matrix-matrix\n 2 for vector-matrix\n 3 for matirx-vector\n 4 for matrix-scalar\n 5 for Scalar-matrix"<<endl;
    cin>>n;
    // if (n==1){
    //     cout<<"Enter the value of A"<<endl;
    //     cin>>A;
    // }
    switch(n){
        case 1:{
        //    cout<<"Enter Matrix A"<<endl;
        //    cin>>A>>endl;
        //    cout<<"Enter Matrix B"<<endl;
        //    cin>>B>>endl;
           vector<vector<int>> r=multiply(A,B);
           break;
           }
        case 2:{
            vector<int> r =multiply(d,A);
            break;
            }
        case 3:{
            vector<int> r= multiply(A,d);
            break;
        }
        case 4:{
            vector<vector<int>> r= multiply(A,c);
            break;
        }
        case 5:{
            vector<vector<int>> r = multiply(c,A);
            break;
        }

    

//     // vector<vector<int>> r=multify_matrix(A,B);
//     // vector<int> r=row_vector_multify(d,A);
//     // print_vector(r);
//     // print(A);
    return 0;
}
}