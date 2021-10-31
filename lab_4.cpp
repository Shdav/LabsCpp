#include <iostream>
#include <cmath>
using namespace std;

void wh(float i, float T, float ai, float K1, float K2, float K3, float s){
    cout << "Using while {" << endl;
    while(true){
        ai=(ai*(i+3)*(i+1))/(i+2);
        s+=1/ai;
        if( i == K1-1 || i == K2-1 || i == K3)
            cout << "   Sum of "<< i << " numbers in sequence=" << s << ",last element=" << 1/ai << endl;
        if( 1/ai < T){
            cout << "   Number of the last element = " << i << ",last element=" << 1/ai << endl << '}' << endl ;
            break;
        }
        i++;   
    }
}

void dowh(float i, float T, float ai, float K1, float K2, float K3, float s){
    cout << "Using do-while {" << endl;
    do{
        ai=(ai*(i+3)*(i+1))/(i+2);
        s+=1/ai;
        if( i == K1-1 || i == K2-1 || i == K3)
            cout << "   Sum of "<< i << " numbers in sequence=" << s << ",last element=" << 1/ai << endl;
        if( 1/ai < T){
            cout << "   Number of the last element = " << i << ",last element=" << 1/ai << endl << '}' << endl ;
            break;
        }
        i++;   
    }while(true);
}

void fr(float i, float T, float ai, float K1, float K2, float K3, float s){
    cout << "Using for {" << endl ;
    for( i = 1 ; true ; i++){
        ai=(ai*(i+3)*(i+1))/(i+2);
        s+=1/ai;
        if( i == K1-1 || i == K2-1 || i == K3)
            cout << "   Sum of "<< i << " numbers in sequence=" << s << ",last element=" << 1/ai << endl;
        if( 1/ai < T){
            cout << "   Number of the last element = " << i << ",last element=" << 1/ai << endl << '}' << endl ;
            break;
        }   
    }
}
int main(){
    float i = 1, T = 1e-6, ai = 3, K1 = 2, K2 = 4, K3 = 7;
    float s = 1/ai;
    wh(i, T, ai, K1, K2, K3, s);
    dowh(i, T, ai, K1, K2, K3, s);
    fr(i, T, ai, K1, K2, K3, s);
    return 0;
}
