#include <bits/stdc++.h>
using namespace std;


int alternatingCharacters(string s) {
    int count=0;
    for(int i=0; i<s.length()-1; i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    return count;
}

int main()
{
    int q;
    cin>> q;
    while(q--){
       string s;
       cin>> s;
       cout<< alternatingCharacters(s)<< endl;
    }
    return 0;
}
