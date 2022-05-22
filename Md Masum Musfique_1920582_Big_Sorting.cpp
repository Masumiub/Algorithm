//Md Masum Musfique_1920582_Big_Sorting
#include<bits/stdc++.h>
#include<vector>
#include<cmath>

using namespace std;

bool compare(string i, string j){
    int n=i.length();
    int m=j.length();

    if(n==m){
        return i<j;
    }
    return n<m;
}

int main(){
    int n;
    cin>> n;
    vector <string> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end(), compare);

    for(int i=0; i<n; i++){
        cout<< arr[i]<< endl;
    }

    return 0;

}
