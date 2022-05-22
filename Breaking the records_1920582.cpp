// Breaking the records
#include <bits/stdc++.h>
using namespace std;


void breakingRecords(int scores[], int n) {
    int min1= scores[0];
    int max1= scores[0];

    int minCount=0;
    int maxCount=0;

    for(int i=1; i<n; i++){
        if(scores[i]<min1){
            min1 = scores[i];
            minCount++;
        }
        if(scores[i]>max1){
            max1 = scores[i];
            maxCount++;
        }
    }
    cout<< maxCount<<" "<< minCount<< endl;
}

int main()
{
   int n;
   cin>>n;
   int scores[n];
   for(int i=0; i<n; i++){
        cin>> scores[i];
   }
   breakingRecords(scores,n) ;
    return 0;
}


