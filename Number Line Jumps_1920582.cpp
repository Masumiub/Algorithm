#include <bits/stdc++.h>
using namespace std;


string kangaroo(int x1, int v1, int x2, int v2) {
    if(v1>v2){
        if((x1 - x2) % (v2 - v1) == 0){
            return "YES";
        }
        else{
            return "NO";
        }
    }
    return "NO";
}
/*
string kangaroo(int x1, int v1, int x2, int v2) {
    if(v1>v2){
        int dist1= (v1*4)+x1;
        int dist2= (v2*4)+x2;
        if(dist1 == dist2){
            return "YES";
        }
        else{
            return "NO";
        }
    }
    return "NO";
}*/

int main()
{
    int x1; int v1; int x2; int v2;
    cin>> x1 >> v1>> x2>> v2;
    cout<< kangaroo(x1,v1,x2,v2)<< endl;
    return 0;
}

