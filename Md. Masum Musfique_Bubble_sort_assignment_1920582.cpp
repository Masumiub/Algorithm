
// Md. Masum Musfique_Bubble_sort_assignment_1920582
#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout<< "How many Numbers you want to store?";
    cin>>n;
    
    int arr[n] ;
    cout<< "Enter the numbers:"<< endl;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    
    
    for(int i=0; i<n-1; i++){ //Ascending
        for(int j=0; j<n-i-1; j++){ // Time complexity: Best: O(n), Avg: O(n^2), Worst: O(n^2)
            if(arr[j]>arr[j+1]){
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    /*
    //alternative code: 
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }*/
    
    
    /*
    //Descending Order
    for(int i=0; i<n-1; i++){ 
        for(int j=0; j<n-i-1; j++){ // Time complexity: Best: O(n), Avg: O(n^2), Worst: O(n^2)
            if(arr[j]<arr[j+1]){
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }*/
    cout<< "The Sorted Array(Ascending Order:)"<< endl;
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    

    return 0;
}
