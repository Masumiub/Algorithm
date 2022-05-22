//Md Masum Musfique_1920582_Counting_Sort
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int a[n];
    int frequency[10]={0};
    int max = a[0];
    for(int i=0; i<n; i++){
        cin>>a[i];
        frequency[a[i]]++;
        if(a[i]>max){
            max = a[i];
        }
    }

    for(int i=1; i<=max; i++){
        frequency[i] = frequency[i]+frequency[i-1];
    }

    int B[n];

    for(int i=n-1; i>=0; i--){
        B[frequency[a[i]]-1] = a[i];
        frequency[a[i]]--;
    }
    cout<< "Sorted Array: "<< endl;

    for(int i=0; i<n; i++){
        cout<< B[i]<< " ";
    }
    /*for(int i=0; i<n; i++){
        for(int j=0; j<frequency[i]; j++){
            cout<< i<< " ";
        }

    }*/

    return 0;
}
