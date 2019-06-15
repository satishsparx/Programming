//Dynamic programming --- Tabulation
#include <iostream>
using namespace std;
int a[1000];

int fib(int n){
  int a[1000];
  a[1] = 1;
  a[2] = 1;

  for(int i=3;i<=n;i++){
    a[i] = a[i-1] + a[i-2];
  }
  return a[n];
}

int main(){
  cout << "Please enter the number:";
  int n;
  cin >> n;
  cout << "Fibonocci number:" << fib(n);
}
