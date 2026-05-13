#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main() {

    srand(time(0));


//1

/*
    int n;
    cout<<"size: ";
    cin>>n;

    int a[100];

    int parn=0;
    int neparn=0;

    for(int i=0;i<n;i++){

        a[i]=rand()%100;

        cout<<a[i]<<" ";

        if(a[i]%2==0)
            parn++;
        else
            neparn++;
    }

    cout<<"\nparni: "<<parn;
    cout<<"\nneparni: "<<neparn;
*/


//2

/*
    int n;
    cout<<"kilkist kutiv: ";
    cin>>n;

    int a[100];
    int sum=0;

    for(int i=0;i<n;i++){

        cout<<"kut "<<i+1<<": ";
        cin>>a[i];

        sum+=a[i];
    }

    if(sum==180*(n-2))
        cout<<"mozhe isnuvaty";
    else
        cout<<"ne mozhe isnuvaty";
*/


//3

/*
    int n;
    cout<<"size: ";
    cin>>n;

    int a[100];

    for(int i=0;i<n;i++){

        a[i]=rand()%20;
        cout<<a[i]<<" ";
    }

    int x,y;

    cout<<"\nsho zaminyty: ";
    cin>>x;

    cout<<"na sho: ";
    cin>>y;

    for(int i=0;i<n;i++){

        if(a[i]==x)
            a[i]=y;
    }

    cout<<"\nnew masiv:\n";

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
*/


//4

/*
    double a[91];

    for(int i=0;i<=90;i++){

        a[i]=sin(i*3.14159/180);
    }

    for(int i=0;i<=90;i++){

        cout<<a[i]<<" ";

        if((i+1)%10==0)
            cout<<"\n";
    }
*/


//5
/*
    int n;
    cout<<"size: ";
    cin>>n;

    int a[100];

    for(int i=0;i<n;i++){

        a[i]=rand()%100;
        cout<<a[i]<<" ";
    }

    int vibor;

    cout<<"\n1-zrostannya 2-spadannya: ";
    cin>>vibor;

    bool ok=true;

    if(vibor==1){

        for(int i=0;i<n-1;i++){

            if(a[i]>a[i+1]){
                ok=false;
                break;
            }
        }

        if(ok)
            cout<<"masiv zrostae";
        else
            cout<<"masiv ne zrostae";
    }

    else if(vibor==2){

        for(int i=0;i<n-1;i++){

            if(a[i]<a[i+1]){
                ok=false;
                break;
            }
        }

        if(ok)
            cout<<"masiv spadae";
        else
            cout<<"masiv ne spadae";
    }
*/

    return 0;
}