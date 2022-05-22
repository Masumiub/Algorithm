//find digits
#include <bits/stdc++.h>
using namespace std;


int findDigits(int n) {
    int count=0;
    int tmp=n;
    while(n>0){
        int x = n%10;
        if(x!=0){
            if(tmp%x==0){
                count++;
            }
        }
        n = n/10;
    }
    return count;
}

int main()
{
   int t;
   cin>> t;
   while(t--){
       int n;
       cin>>n;
       cout<<findDigits(n)<< endl;

   }

    return 0;
}


