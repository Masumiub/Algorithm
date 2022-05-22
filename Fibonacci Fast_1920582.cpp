#include<iostream>
#include<math.h>
using namespace std;

//int F[2][2] = {{1,1}, {1,0}};
//int M[2][2] = {{1,1}, {1,0}};
int Multiply(int F[2][2], int M[2][2]){
    int x = F[0][0]*M[0][0] + F[0][1]*M[1][0];
    int y = F[0][0]*M[0][1] + F[0][1]*M[1][1];
    int z = F[1][0]*M[0][0] + F[1][1]*M[1][0];
    int w = F[1][0]*M[0][1] + F[1][1]*M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
    return F;
}

int power(int F[2][2], int n){
    int M[2][2] = {{1,1}, {1,0}};
    if(n==0||n==1){
        return;
    }
    power(F, n/2);
    F = Multiply(F, F);
    if(n%2!=0){
        Multiply(F, M);
    }
    return F;
}

int fibo(int n){
    int F[2][2] = {{1,1}, {1,0}};
    if(n == 0){
        return 0;
    }
    F = power(F, n-1);
    return F[0][0];
}


int main(){
    int n;
    cout<< "Enter a number: "<< endl;
    cin>> n;
    cout<< fibo(n)<< endl;
}
