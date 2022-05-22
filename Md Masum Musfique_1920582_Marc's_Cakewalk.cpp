//Md Masum Musfique_1920582_Marc's_Cakewalk
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

long marcsCakewalk(int arr[], int n) {
    sort(arr, arr + n, greater<int>());

    long int sum=0;
    int a=0;
    for(int i=0; i<n; i++){
        sum += (pow(2, a)*arr[i]);
        a++;

    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cout<<  marcsCakewalk(arr, n)<< endl;
    return 0;
}


