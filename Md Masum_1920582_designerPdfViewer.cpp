#include <bits/stdc++.h>
#include <string.h>
using namespace std;


int designerPdfViewer(int h[26], string word) {
    int max_height=-9999999;
    int word_length = word.length();
    for(int i=0; i<word_length; i++){
        if(h[word[i]-'a']>max_height){
            max_height = h[word[i]-'a'];
        }
    }
    return max_height*word_length;
}

int main()
{

    int h[26];
    for(int i=0; i<26; i++){
        cin>> h[i];
    }
    string word;
    cin>> word;
    cout<< designerPdfViewer(h, word)<< endl;
    return 0;
}

