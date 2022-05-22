//Md Masum Musfique_1920582_Counting_Sort_1_Hackerrank
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>> n;
    int arr[n];
    int frequency[100]={0};
    for(int i=0; i<n; i++){
        cin>>arr[i];
        frequency[arr[i]]++;
    }

    for(int i=0; i<100; i++){
        cout<< frequency[i]<< " ";
    }
    return 0;
}



