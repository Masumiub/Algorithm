//electronics shop
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int main()
{
    int b, n, m;
    cin>> b>>n>>m;
    int keyboards[n];
    for(int i=0; i<n; i++){
        cin>> keyboards[i];
    }
    int drives[m];
    for(int i=0; i<m; i++){
        cin>> drives[i];
    }

    int money=-1;
    for(int i=0; i<n ; i++){
        for(int j=0; j<m; j++){
            if(keyboards[i]+drives[j]<=b){
                money = max(money,keyboards[i]+drives[j]);
            }
        }
    }
    cout<<money<< endl;
    return 0;
}

