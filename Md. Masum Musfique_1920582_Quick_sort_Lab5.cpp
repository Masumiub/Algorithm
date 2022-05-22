//Md. Masum Musfique_1920582_Quick_sort_Lab5
#include<iostream>
using namespace std;

int partition(int A[], int p, int r){
    int pivot = A[r]; //last element;
    int  i = p-1;
    for(int j = p; j<=r-1; j++){
        if(A[j] <= pivot){
            i++;
            int tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }
    int tmp2 = A[i+1];
    A[i+1] = A[r];
    A[r] = tmp2;
    return i+1;
}

void quicksort(int A[],int p,int r){
    if(p<r){
        int q = partition(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}

int main(){
    int A[]={11,3,6,10,4,3,8,5};
    int p=0;
    int r=7;
    quicksort(A, p, r);

    cout<< "The Sorted Array: ";
    for(int i=0; i<8; i++){
        cout<< A[i] << " ";
    }
}
