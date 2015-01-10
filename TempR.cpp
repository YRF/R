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

cout <<"sssssssssssssssssssssssssssssssssssssssssssss";
//see(b,10);
}
