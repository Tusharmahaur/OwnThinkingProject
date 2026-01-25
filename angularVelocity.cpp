#include <iostream>
#include <cmath>
using namespace std;

double angularVelocity(){
    int n;
    cout<<"Enter the number of rounds : ";
    cin>>n;
    return 2*M_PI*n;
}

void accelaration(void){
    double r,v;

    cout<<"Enter the Radius and Velocity Respactivily : ";
    cin>>r>>v;
    cout<<"Linear Accelaration = "<<v*v/r<<endl;
}

double angularAccelaration(){
    double r,temp;
    cout<<"Enter the radius : ";
    cin>>r;
    temp = angularVelocity();
    return r*temp*temp;
}


int main(){
    cout<<"Angular Accelaration = "<<angularAccelaration()<<endl;
    return 0;
}