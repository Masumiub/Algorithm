//Md Masum Musfique_1920582_Running_time_of_algo
#include <bits/stdc++.h>
using namespace std;


int runningTime(int arr[], int n) {
    int sum=0, count=0;
    for(int i=1; i<=n-1; i++){ // Ascending Order
        int value = arr[i];
        int hole = i;
        while(hole>0 && arr[hole-1] > value){
            arr[hole] = arr[hole-1];
            hole = hole - 1;
            count++;
        }
        //sum += count;
        arr[hole] = value;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<< runningTime(arr,n)<< endl;
    return 0;
}

