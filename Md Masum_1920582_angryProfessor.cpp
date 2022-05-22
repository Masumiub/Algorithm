#include <bits/stdc++.h>
using namespace std;

string angryProfessor(int k, int a[], int n) {
    int early = 0;
    int late = 0;
    for(int i=0; i<n; i++){
        if(a[i]<=0){
            early++;
        }
        else if(a[i]>0){
            late++;
        }
    }
    if(early>=k){
        return "NO";
    }
    else{
        return "YES";
    }
}

int main()
{
    
    int t;
    cin>> t;
    
    while (t--) {
    int n, k;
    cin>> n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    cout<< angryProfessor(k, a, n)<< endl;
    }
    
    return 0;
}

