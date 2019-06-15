// Recursion
#include <iostream>
using namespace std;

long long int fact(int n){
  if(n == 0){
    return 1;
  }
  return n*fact(n-1);
}

int main(){
  cout << "Enter the number:";
  int n;
  cin >> n;

  cout << "Factorial of a given no:" << fact(n);
}
