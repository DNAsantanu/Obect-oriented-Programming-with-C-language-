#include<bits/stdc++.h>
#include<math.h>
// #include <iomanip>
using namespace std;

// int main  (){
//     int i = 5;
//     int *p = &i;
//     cout<<p;
//     return 0;
// }



int fibof(int n){
    double a = 0;
    double b = 1;
    double quotnt= a/b;
    cout<<a<<endl;
    cout<<b<<setw(30)<<setprecision(20)<< quotnt<<endl;
    for (int i =1; i<=n-2; i++){
        int temp =a + b;
        a = b;
        b = temp;
        double quotnt= a/b;
        cout<<temp<<setw(30)<<setprecision(20)<< quotnt<<endl;
    }
    return 0;

}


int fibow(int n){
    double a = 0;
    double b = 1;
    double quotnt= a/b;
    cout<<a<<endl;
    cout<<b<<setw(30)<<setprecision(20)<< quotnt<<endl;
    int i=1;
    while (i<=n-2){
        int temp =a + b;
        a = b;
        b = temp;
        double quotnt= a/b;
        cout<<temp<<setw(30)<<setprecision(20)<< quotnt<<endl;
        i++;
    }
    return 0;

}

int fibodw(int n){
    double a = 0;
    double b = 1;
    double quotnt= a/b;
    cout<<a<<endl;
    cout<<b<<setw(30)<<setprecision(20)<< quotnt<<endl;
    int i=1;
    do{
        int temp =a + b;
        a = b;
        b = temp;
        double quotnt= a/b;
        cout<<temp<<setw(30)<<setprecision(20)<< quotnt<<endl;
        i++;
    }
    while(i<n-1);
    return 0;

}



int main(){
    fibodw(100);
    return 0;
}
