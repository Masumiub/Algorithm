//Md Masum Musfique_1920582_Cut_the_Stick
#include <bits/stdc++.h>
using namespace std;


void cutTheSticks(int arr[], int n) {
    /*int min= INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    int count=0;
    for(int i=0; i<n; i++){
        arr[i] = arr[i]-min;
        if(arr[i]>0){
            count++;
        }
    }*/
    int min;
    int i,j, k;
    int count=0;
    while(1){
        for(i=0; i<n; i++){
            if(arr[i]>0){
                min = arr[i];
                break;
            }
        }
        for(j=i; j<n; j++){
            if(min>arr[j] && arr[j]>0){
                min=arr[j];
            }
        }
        if((n-count)!=0){
            cout<< n-count << endl;
        }
        else{
            break;
        }

        for(k=0; k<n; k++){
            arr[k] = arr[k]-min;
            if(arr[k]==0){
                count++;
            }
        }

    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cutTheSticks(arr, n);

    return 0;
}


