#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
/*int factorial(int num) 
{ 
    if (num == 0) 
    { 
        return 1; 
    } 
    else if (num == 1) 
    { 
        return 1; 
    } 
    else 
    { 
        return num * factorial(num - 1); 
    } 
}
int main(){
    int M;
    cin>>M;
   
    double a[M][M];
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            a[i][j]=pow(factorial(i),j);
            std::cout<<"1/"<<a[i][j]<<' ';
            a[i][j]=1/a[i][j];
        }
        cout<<std::endl;
    }
    //proverka
*/
int main(){
    int M;
    cin>>M;
    const int N=M;
    if(N>10)
        return 0;
    double a[N][N];
    for(int i=0;i<N;i++){
        a[0][i]=1.0;
        a[i][0]=1.0;
        a[1][i]=1.0;
    }
    double s=1;
    for(int i=2;i<N;i++){
        s*=i;
        for(int j=1;j<N;j++)
            a[i][j]=a[i][j-1]/s;
    }
    int size = (80-(N-1))/N;
       size --;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            cout<<fixed<<setprecision(size)<<a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
} 
