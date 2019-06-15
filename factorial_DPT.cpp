// DPT --- Dynamic progamming with tabulation
#include <iostream>
using namespace std;

int fact(int n){
  int a[1000];
  a[0] = 1;
  for(int i=1;i<=n;i++){
    a[i] = a[i-1]*i;
  }
  return a[n];
}

int main(){
  cout << "Please enter the number:";
  int n;
  cin >> n;
  cout << "Factorial of a number:"<<fact(n);
}
