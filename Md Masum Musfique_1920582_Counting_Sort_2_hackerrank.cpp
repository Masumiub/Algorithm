//Md Masum Musfique_1920582_Counting_Sort_2_hackerrank
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int a[n];
    int frequency[100]={0};
    int max = a[0];
    for(int i=0; i<n; i++){
        cin>>a[i];
        frequency[a[i]]++;
        if(max<a[i]){
            max = a[i];
        }
    }
    int b[n];
    for(int i=1; i<=max; i++){
        frequency[i] = frequency[i]+frequency[i-1];
    }
    for(int i=n-1; i>=0; i--){
        b[frequency[a[i]]-1] = a[i];
        frequency[a[i]]--;
    }
    for(int i=0; i<n; i++){
        cout<< b[i]<< " ";
    }

    return 0;
}
