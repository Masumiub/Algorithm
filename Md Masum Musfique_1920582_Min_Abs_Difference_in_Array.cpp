//Md Masum Musfique_1920582_Min_Abs_Difference_in_Array
#include <bits/stdc++.h>
#include <math.h>

using namespace std;


/*void Sorting(int arr[], int n) { // time limit exceeded
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}*/

int minimumAbsoluteDifference(int arr[], int n) {
    int min = INT_MAX;
    sort(arr, arr + n);
    for(int i=0; i<n-1; i++){
        if (abs(arr[i+1]-arr[i])<min){
            min = abs(arr[i+1]-arr[i]);
        }
    }
    return min;

}

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }


    cout<< minimumAbsoluteDifference(arr, n)<< endl;
    return 0;
}





