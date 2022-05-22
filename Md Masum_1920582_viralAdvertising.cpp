#include <bits/stdc++.h>
#include <math.h>
using namespace std;


int viralAdvertising(int n) {
    int Cumulative=0;
    int Shared = 5;
    for(int i=0; i<n ; i++){
        Cumulative += floor(Shared/2);
        Shared = floor(Shared/2)*3;
    }
    return Cumulative;
}

int main()
{
    int n;
    cin>> n;
    cout<< viralAdvertising(n)<< endl;
    return 0;
}


