#include <bits/stdc++.h>
#include <math.h>
using namespace std;


string catAndMouse(int x, int y, int z) {
    int dist1;
    int dist2;
    dist1 = abs(z - y);
    dist2 = abs(z - x);
    
    if(dist1 == dist2){
        return "Mouse C";
    }
    else if(dist2>dist1){
        return "Cat B";
    }
    else{
        return "Cat A";
    }
}

int main()
{
    int q;
    cin>> q;
    int x,y,z;
    while(q--){
        cin>> x>>y>>z;
        cout<< catAndMouse(x,y,z)<< endl;
    }
    return 0;
}

