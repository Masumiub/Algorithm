//minimum distance
#include <bits/stdc++.h>
#include<math.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i = 0;i<n;i++){
       cin >> A[i];
    }
    int dist = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(A[i] == A[j]&& j-i < dist) {
                dist = j-i;
            }
        }
    }
    if(dist == INT_MAX) {
        cout<<"-1"<<endl;
    } else {
        cout<<dist<< endl;
    }
    return 0;
}


