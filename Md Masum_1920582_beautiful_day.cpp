#include <iostream>
using namespace std;

int rev(int n) {
    int reversedNumber = 0, remainder;
  
    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
  return reversedNumber;
}
int beautiful_day(int i1,int j1,int k1){
    int count = 0;
    for(int i = i1; i <= j1; i++) {

    if (abs(i - rev(i))% k1 == 0) {
      count++;
    }
  }
  return count;
}
int main() {
  int i1, j1, k1;
  cin >> i1 >> j1 >> k1;
  
  cout<< beautiful_day(i1,j1,k1)<< endl;
  return 0;
}