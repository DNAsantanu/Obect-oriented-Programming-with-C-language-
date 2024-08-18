#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

//function for calculating p-norm (by default the p value is set to 2):
double pnorm(double* arr1,int A_row,double p=2){
    
    double norm=0;
        for (int i=0;i<A_row;i++){
            norm+=pow(arr1[i],p); 
            }
            norm=pow(norm,1/p);
            cout<<norm;
    return 0;
}

int main(){
    double d[]={1,1,1};
    int d_size=sizeof(d)/sizeof(d[0]);
    cout<<"2-norm calculation of d={1,1,1} vector: ";
    double norm=pnorm(d,d_size);
    cout<<endl;
    return 0;
}
