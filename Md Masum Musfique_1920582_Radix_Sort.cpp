//Md Masum Musfique_1920582_Radix_Sort
#include <iostream>
using namespace std;

void count_sort(int a[], int n, int pos){
    int count[10]={0};
    int b[n];
    for(int i=0; i<n; i++){
        count[(a[i]/pos)%10]++;
    }

    for(int i=1; i<10; i++){
        count[i] = count[i] + count[i-1];
    }

    for(int i=n-1; i>=0; i--){
        b[count[(a[i]/pos)%10]-1]=a[i];
        count[(a[i]/pos)%10]--;
    }

    for(int i=0; i<n; i++){
        a[i] = b[i];
    }

}


int getmax(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

void radix_sort(int arr[], int n){
    int max = getmax(arr, n);
    for(int pos =1; max/pos>0; pos=pos*10){
        count_sort(arr, n, pos);
    }
}

void print_array(int arr[], int n){
    cout<< "Sorted Array:"<< endl;
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
}

int main()
{
    int arr[] = { 432, 8, 530, 90, 88, 231, 11, 45, 677, 199 };
    int n = sizeof(arr) / sizeof(arr[0]);


    cout<< "Unsorted Array:"<< endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
    radix_sort(arr, n);
    print_array(arr, n);
    //cout << "Max Element = " << *max_element(arr, arr + n)<< endl;

    return 0;
}
