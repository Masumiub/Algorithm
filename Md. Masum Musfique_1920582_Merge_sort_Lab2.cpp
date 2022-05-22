//Md. Masum Musfique_1920582_Merge_sort_Lab2
#include<iostream>
#include <math.h>
using namespace std;

#define inf 99999999

void Merge(int A[], int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1];
    int R[n2+1];
    for(int i=1; i<=n1; i++){
        L[i] = A[p+i-1];
    }
    for(int i=1; i<=n2; i++){
        R[i] = A[q+i];
    }
    L[n1+1] = inf;
    R[n1+1] = inf;

    int i = 1;
    int j = 1;
    for(int k=p ; k<=r; k++){
        if(L[i]<=R[j]){
            A[k] = L[i];
            i = i+1;
        }
        else{
            A[k] = R[j];
            j = j+1;
        }
    }
}
void Merge_Sort(int A[], int p, int r){
    if(p<r){
        int q = (p+r)/2;
        Merge_Sort(A,p,q);
        Merge_Sort(A,q+1,r);
        Merge(A,p,q,r);
    }
}

int main(){
    int A[]={-4,-5,24,8,1,3,16,10};

    int p =0;
    int r =7;
    Merge_Sort(A,p,r);

    cout<< "Sorted Display: "<< endl;
    for(int i=0; i<8; i++){
        cout<< A[i]<< " ";
    }

    return 0;
}
