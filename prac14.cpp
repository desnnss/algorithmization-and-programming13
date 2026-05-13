#include <iostream>
#include <string>
using namespace std;

void serednye(int *a,int size){

    int *p=a;

    int parni=0;
    int neparni=0;

    int kparni=0;
    int kneparni=0;

    for(int i=0;i<size;i++){

        if(*p%2==0){
            parni+=*p;
            kparni++;
        }

        else{
            neparni+=*p;
            kneparni++;
        }

        p++;
    }

    if(kparni>0)
        cout<<"seredne parnih: "<<(double)parni/kparni<<"\n";

    if(kneparni>0)
        cout<<"seredne neparnih: "<<(double)neparni/kneparni<<"\n";
}

void ryadki(string *a,int size){

    string *p=a;

    string max=*p;
    string min=*p;

    for(int i=0;i<size;i++){

        if((*p).length()>max.length())
            max=*p;

        if((*p).length()<min.length())
            min=*p;

        p++;
    }

    cout<<"naydovshiy: "<<max<<" size "<<max.length()<<"\n";
    cout<<"naykorotshiy: "<<min<<" size "<<min.length()<<"\n";
}

void suma(float *a,int size){

    float *p=a+size-1;

    float sum=0;

    for(int i=size-1;i>=0;i--){

        sum+=*p;
        p--;
    }

    cout<<"suma: "<<sum<<"\n";
}

int main() {

    int a[5]={2,5,8,7,10};

    serednye(a,5);

    cout<<"\n";

    string b[5]={"cat","programuvannya","hi","windows","cpp"};

    ryadki(b,5);

    cout<<"\n";

    float c[5]={1.5,2.3,4.1,6.7,3.2};

    suma(c,5);
    
    return 0;
}