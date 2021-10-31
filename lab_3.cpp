#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float y( float x ){
    return pow( 2, sin(x) ) - ( pow( log(x),2 ) ) / 5;
}
int main(){
    string S,T;
    int N,cnt,M;
    float xn, xk, dx ;
    cin >> xn >> xk >> dx;
    int s = 0;   
    cout  << setw(4) << right <<'X' << setfill(' ') << setw(15) << 'Y'<<endl;
    for( float k = xn ; k < xk ; k += dx ){
        if( (int) k != k )
            cout << setprecision(4) << setw(4) << right << k;
        else
            cout << setw(4) << right << setprecision(0) << k;
        cout << fixed << setw(20)<< right  << setprecision(6) << setw(20)  << right << y(k) <<endl;
        if(cnt>1)
            N = M;
        cnt = 0;
    }
    return 0;
}