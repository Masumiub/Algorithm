#include <bits/stdc++.h>
using namespace std;


int utopianTree(int n) {
    if(n==0){
        return 1;
    }
    else{
            int h=1;
            for(int i=0; i<n; i++){
                if(i%2==1){
                    h++;
                }
                else{
                    h = h*2;
                }
            }
            return h;
    }
     
}

int main()
{
    int t;
    cin>> t;
    int n;
    while(t--){
        cin>> n;
        cout<< utopianTree(n)<< endl;
    }
    return 0;
}

