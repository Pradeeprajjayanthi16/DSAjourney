#include <iostream>
using namespace std;

int main() {
     int n , ld ;
     cin >> n ;
     int x = n;
     int sum = 0 ;
     while (n>0){
         ld = n % 10 ;
         sum = sum * 10 + ld ;
         n = n / 10 ;
     }
     cout << sum << endl ;
