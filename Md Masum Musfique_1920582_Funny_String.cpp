//Md Masum Musfique_1920582_Funny_String
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
using namespace std;


string funnyString(string s){
    int rev = s.length()-1;
    bool ok = true;
    for(int i=1; i<s.length(); i++, rev--){
        if(abs(s[i]-s[i-1]) != abs(s[rev]-s[rev-1])){
            ok = false;
            break;
        }
    }
    if(ok){
        return "Funny";
    }
    else{
        return "Not Funny";
    }
}

/*
string funnyString(string s) {
    //int count1=0;
    //int count2=0;
    int diff1, diff2;

    int diff1_set[s.length()-1];
    int diff2_set[s.length()-1];

    for(int i=0; i<s.length(); i++){
        diff1 = abs(s[i]-s[i+1]);
        diff1_set[i] = diff1;
    }

    for(int i=0; i<s.length(); i++){
        cout<< diff1_set[i]<< " ";
    }
    cout<< endl;
    string new_s;
    for(int i=s.length()-1; i>=0; i--){
        new_s.push_back(s[i]);
    }

    for(int i=0; i<new_s.length(); i++){
        diff2 = abs(new_s[i]-new_s[i+1]);
        diff2_set[i] = diff2;
    }

    for(int i=0; i<s.length(); i++){
        cout<< diff2_set[i]<< " ";
    }
    cout<< endl;
    bool state = true;
    for(int i=0; i<s.length()-1; i++){
        if(diff1_set[i] != diff2_set[i]){
            state = false;
            break;
        }
    }
    if(state){
        return "Funny";
    }
    else{
        return "Not Funny";
    }
}
*/
int main()
{
    int q;
    cin>> q;

    while(q--){
        string s;
        cin>> s;
        cout<< funnyString(s)<< endl;
    }
    return 0;
}
