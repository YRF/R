#include <algorithm>
#include <iostream>
using namespace std;
int a[]={4,3,2,1,5,6,7,8,100,22,34,56,34};
void see(int *a,int n){
    cout<<"\n"<<"Mas =  ";
for (int i=0;i<n;++i)
    cout<<a[i]<<" ";
}
//=============Reload see=========================
void see(int **a,int n){
    cout<<"\n"<<"Mas =  ";
for (int i=0;i<n;++i){
    cout<<a[0][i]<<" ";
    cout<<a[1][i]<<" ";
}}
//----------------------------

void R(int h){
    cout<<h<<' ';
if (h>2){int a=h/2; R(a);}
}

int main() {
   //int *a=new int [10];
   int **b=new int *[2];
   for ( size_t i = 0; i != 2; ++i)
    b[i] = new int[10];
    //b[0]=a;

    b[1][5]=3;
see(b,10);

see(b,10);
}
