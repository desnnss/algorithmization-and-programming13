#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void print(float*** a,int x,int y,int z){
for(int i=0;i<x;i++){
cout<<"layer "<<i<<endl;
for(int j=0;j<y;j++){
for(int k=0;k<z;k++){
cout<<a[i][j][k]<<" ";
}
cout<<endl;
}
cout<<endl;
}
}

int main(){
srand(time(0));

int* i=new int;
double* d=new double;
char* c=new char;
bool* b=new bool;

cin>>*i;
cin>>*d;
cin>>*c;
cin>>*b;

cout<<*i<<" "<<*d<<" "<<*c<<" "<<*b<<endl;

double* p=new double;
double& r=*p;

cin>>r;
cout<<r<<endl;

int n;
cin>>n;

int* arr=new int[n];

for(int i=0;i<n;i++){
arr[i]=n-1-i;
}

for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;

int x,y,z;
cin>>x>>y>>z;

float*** a=new float**[x];

for(int i=0;i<x;i++){
a[i]=new float*[y];
for(int j=0;j<y;j++){
a[i][j]=new float[z];
}
}

for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
for(int k=0;k<z;k++){
a[i][j][k]=rand()%100;
}
}
}

print(a,x,y,z);

delete i;
delete d;
delete c;
delete b;
delete p;
delete[] arr;

for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
delete[] a[i][j];
}
delete[] a[i];
}
delete[] a;

return 0;
}