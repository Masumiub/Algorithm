//Md. Masum Musfique_1920582_Insertion_Sort_Assignment
#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
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

    cout<< "The Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< "\nShifts: "<< count<< endl;
    return 0;
}
