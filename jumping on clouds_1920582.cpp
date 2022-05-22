//jumping on clouds
#include <bits/stdc++.h>
using namespace std;


int jumpingOnClouds(int c[],int n, int k) {
    int energy =100;
    int i=0;
    while(i==0||i%n!=0){
        if(c[i%n]==1){
            energy -=2;
        }
        energy--;
        i=i+k;
    }
    return energy;
}

int main()
{
    int n, k;
    cin>> n>> k;
    int c[n];
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    cout<< jumpingOnClouds(c,n,k)<< endl;
    return 0;
}

