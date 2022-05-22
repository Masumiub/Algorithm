#include <iostream>
#include <math.h>
using namespace std;

#define inf 99999999

void Merge(char a[], int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;

    int L[n1+1];
    int R[n2+1];

    for(int i=1; i<=n1; i++){
        L[i]=a[p+i-1];
    }

    for(int i=1; i<=n2; i++){
        R[i]=a[q+i];
    }
    L[n1+1] = inf;
    R[n2+1] = inf;

    int i=1;
    int j=1;
    for(int k=p; k<=r; k++){
        if(L[i]<=R[i]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
    }
}

void Merge_sort(char a[],int p,int r){
    if(p<r){
        int q = (p+r)/2;
        Merge_sort(a,p,q);
        Merge_sort(a,q+1,r);
        Merge(a,p,q,r);
    }
}

int main()
{
    char a[]={'a','q','u','i','c','k','b','r','o','w','n','f','o','x','j','u','m','p','s','o','v','e','r','t','h','e','l','a','z','y','d','o','g'};

    int p=0;
    int r = 32;

    for(int i = 0; i<33; i++){
        cout<< a[i]<< " ";
    }
    Merge_sort(a,p,r);

    cout<< "Sorted Display:"<< endl;
    for(int i = 0; i<34; i++){
        cout<< a[i]<< " ";
    }

    return 0;
}
