// DPM -- dynamic programming with memozation
#include <iostream>
using namespace std;

int a[1000];

int fact(int n){
  if(n==0){
    return 1;
  }
  if(a[n] != 0){
    return a[n];
  }
  return (a[n] = fact(n-1)*n);
}

int main(){
  cout << "Please enter the number:";
  int n;
  cin >> n;
  cout << "Factorial of a number:"<<fact(n);

}
