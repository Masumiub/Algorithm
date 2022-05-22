#include<iostream>
#include<math.h>
using namespace std;

long long int power(int a, int b){ // took long long int so that we can deal with large numbers
    if(b==0){
        return 1;
    }
    else if(b%2==0){ // for even numbers
        long long int x = power(a, b/2);
        return x*x;
    }
    else{ // for odd numbers
        long long int x = power(a, b/2);
        return x*x*a;
    }
}

int main(){
    long long int a, b;
    cout<< "Enter the base & power: ";
    cin>> a>> b;
    cout<< power(a, b)<< endl;
}
