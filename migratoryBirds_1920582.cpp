#include <bits/stdc++.h>
using namespace std;


int migratoryBirds(int arr[], int n) {
    int frequency[6]={0};
    int low_track;
    for(int i=0; i<n; i++){
        frequency[arr[i]]++;
    }
    int highest=-99999999;
    for(int j=2; j<6; j++){
        if(highest<frequency[j]){
            highest=frequency[j];
            low_track=j;
        }
    }
    return low_track;
}
/*
int migratoryBirds(int arr[], int n) {
    int count=0;int highest =-999999999;
    int track;int low_track=99999999;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                track = arr[i];
                if(highest<count){
                    highest=count;
                    if(low_track>track){
                        low_track=track;
                    }
                }
            }
        }
    }
    return low_track;
}*/

int main()
{
   int n;
   cin>> n;
   int arr[n];
   for(int i=0; i< n; i ++){
       cin>> arr[i];
   }
    
    cout<< migratoryBirds(arr,n)<< endl;
    return 0;
}



