#include <bits/stdc++.h>
using namespace std;


int divisibleSumPairs(int n, int k, int arr[]) {
    
    int count=0;
    
    for(int i=0; i< n; i++){
        for(int j=i+1; j<n; j++){
            
                if((arr[i]+arr[j])%k==0){
                    count++;
                }
            
        }
    }
    return count;
}

int main()
{
   int n, k;
   cin>> n>> k;
   
   int arr[n];
   for(int i=0; i<n; i++){
       cin>> arr[i];
   } 
   
   int res = divisibleSumPairs(n, k,arr);
   cout<< res<< endl;
   return 0;
}

