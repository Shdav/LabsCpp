#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define toch 1e-15


void mPrib(double l, double r, int s){
    s = 0;
    do{
        l = r;
        r = cos(l);
        s++;
    }while( abs( r - l ) > toch);
    
    cout << "Корень уравнения = " << setprecision(20) << r << "; кол-во приближений ="<<s<<"; используя метод итерации"<<endl;
}

double znach( double x){
    return x-cos(x);
}

void poDel( double l, double r, int s ){
    double sred = ( r + l ) / 2;
    while( r - l > toch){
        if(  znach(l) * znach(sred) < 0 ) 
            r = sred;
        else
            l = sred;
        sred = (l+r)/2;
        s++;
    }
    cout << "Корень уравнения = " << setprecision(20) << sred << "; кол-во приближений ="<<s<<"; используя метод половинного деления"<<endl;
}

double proizv( double x){
    return 1+sin(x);
}

void mNyut( double l, double r, int s){
    do{
    l = r;
    r = l - znach(l)/proizv(l);
    s++;
    }while(abs( l-r )> toch);
    cout << "Корень уравнения = " << setprecision(20) << l << "; кол-во приближений ="<<s<<"; используя метод Ньютона";
}


int main(){
    double l = 0, r = 2;
    int s = 0;  
    mPrib( l, r, s);  
    poDel( l, r, s);
    mNyut( l, r, s);
    return 0;
}