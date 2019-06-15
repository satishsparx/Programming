//Dynamic programming --- memozation
#include <iostream>
using namespace std;
int a[1000];

int fib(int n){
  if(n==1 || n==2)
    return 1;
  else if(a[n]!=0){
    return a[n];
  }
  return (a[n] = fib(n-1)+fib(n-2));
}

int main(){
  cout << "Please enter the number:";
  int n;
  cin >> n;
  cout << "Fibonocci number:" << fib(n);
}
