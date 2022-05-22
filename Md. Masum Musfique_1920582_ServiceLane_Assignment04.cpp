//Md. Masum Musfique_1920582_ServiceLane_Assignment04
#include <bits/stdc++.h>
using namespace std;

void serviceLane(int width[], int n, int t) {
    int i, j;
    
    int min;
    while(t--){
        cin>> i>>j;
        min = width[i];
        for(int k=i+1; k<=j; k++){
            if(min>width[k]){
                min=width[k];
            }
        }
        cout<< min<< endl;
    }
}

int main()
{
    int n;
    int t;
    cin>>n>>t;
    int width[n];
    for(int i=0; i<n; i++){
        cin>>width[i];
    }
    serviceLane(width, n, t);
    return 0;
}


