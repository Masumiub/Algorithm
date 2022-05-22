
#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    
    int tmp, large = 0;
    for(int i=0; i<n; i++){
        cin >> tmp;
        large = max(large, tmp);
    }

    cout << (large <= k ? 0 : large - k) <<endl;
    return 0;
}

/* //Alternative Code
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void hurdleRace(int k, int height[], int n) {
    int large = height[0];
    for(int i=0; i<n; i++){
        if(large<height[i]){
            large = height[i];
        }
    }
    if(large<k){
        cout<<0<< endl;
    }
    else{
        cout<< large-k<< endl;
    }
}

int main()
{
    int n , k;
    int height[n];
    cin>> n>> k;
    for(int i=0; i<n; i++){
        cin>> height[i];
    }
    hurdleRace(k, height, n);
    
    return 0;
}
*/

