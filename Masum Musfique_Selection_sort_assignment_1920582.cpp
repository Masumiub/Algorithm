// Md. Masum Musfique_Selection_sort_assignment_1920582
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "How many Numbers you want to store?";
    cin>>n;
    
    int arr[n];
    cout<< "Enter the numbers:"<< endl;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){ // // Time Complexity: Best: O(n^2), Avg: O(n^2), Worst: O(n^2)
            if(arr[j] < arr[min]){
                min = j;
            }
        }
            if(min != i){
                int tmp = arr[min];
                arr[min] = arr[i];
                arr[i] = tmp;
            }
    }
    
    cout<< "The Sorted Array(Ascending Order:)"<< endl;
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    

    return 0;
}
