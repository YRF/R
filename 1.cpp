#include <iostream>
using namespace std;
int a[]={4,3,2,1,5,6,7,8,100,22,34,56,34};
void see(int *a,int n){
    cout<<"\n"<<"Mas =  ";
for (int i=0;i<n;++i)
    cout<<a[i]<<" ";
}

void show (int *a,int s, int n){
if (s==n)cout<<"\nA+= "<<a[s];
else {
    int m=(s+n)/2;
    show(a,s,m);
    show(a,m+1,n);
}
}
int main(){
show (a,0,12);}
