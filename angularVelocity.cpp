// #include <iostream>
// #include <cmath>
// using namespace std;
// float g = 9.8;

// double angularVelocity(){
//     int n;
//     cout<<"Enter the number of rounds : ";
//     cin>>n;
//     return 2*M_PI*n;
// }

// void accelaration(void){
//     double r,v;

//     cout<<"Enter the Radius and Velocity Respactivily : ";
//     cin>>r>>v;
//     cout<<"Linear Accelaration = "<<v*v/r<<endl;
// }

// double angularAccelaration(){
//     double r,temp;
//     cout<<"Enter the radius : ";
//     cin>>r;
//     temp = angularVelocity();
//     return r*temp*temp;
// }

// double timePeriod(){
//     double l;
//     int theta;
//     cout<<"Enter the Length of Rope(in meter) and Angle(in degree) = ";
//     cin>>l>>theta;
//     return 2*M_PI*sqrt((l*cos(theta*M_PI/180))/g);
// }


// int main(){
    
//     cout<<"Time Period = "<<timePeriod()<<" sec"<<endl;
//     return 0;   
// }