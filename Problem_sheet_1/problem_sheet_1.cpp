#include <iostream>
#include <math.h>
using namespace std;
int main(){
//int n,m;
//double n,m;
//cout<<"Enter the value of n and m:"<<endl;
//cin>>n>>m;
/*if (n>m){
int temp=n;
n=m;
m=temp;}*/
/*int sum=0;*/ // b.(i)This has some limit to store the value beyond which it can't store 
//double sum=0;// b.(ii)This has used to store large values.
//(a)
/*for (int i=n;i<=m;i++)
{ sum+=i;
}
cout<<"the value of sum:"<<sum;*/
/*for (int i=n;i<=m;i++)
{sum+=i*i;
}
cout<<"the value sum of squared values is:"<<sum;*/

//c.(i)
/*for (double i=n;i<=m;i=i+0.2)
{ sum+=sin(i)*sin(i);
}
cout<<"the value sum of sin squared values is:"<<sum;*/
//c.(ii)
/*for (double i=n;i<=m;i=i+0.1)
{ sum+=exp(i);
}
cout<<"the value sum of exponent values is:"<<sum;*/
int n;
cout<<"Enter the value of n:";
cin>>n;
double fact=1;
for (double i=1;i<=n;i++)
{ fact*=i;
}
cout<<"the value of the factorial n is "<<fact<<endl;

return 0;
}
