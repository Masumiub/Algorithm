#include <bits/stdc++.h>
#include<math.h>
using namespace std;

void bonAppetit(int bill[],int n, int k, int b) {
    int result =0;
    int sum=0;
    for(int i=0; i<n; i++){
        if(i==k){
            continue;
        }
        else{
            sum += bill[i];
        }        
    }
    result = sum/2;
    if(result == b){
        cout<< "Bon Appetit"<< endl;
    }
    else{
        cout<< abs(b-result)<< endl;
    }
}

int main()
{
    int n, k;
    cin>> n>> k;
    int bill[n];
    for(int i=0; i<n; i++){
        cin>> bill[i];
    }
    int b;
    cin>> b;

    bonAppetit(bill,n,k,b);

    return 0;
}

