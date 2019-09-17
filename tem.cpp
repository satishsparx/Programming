#include <iostream>

using namespace std;

int reverse_number(int n){
    int temp = 0;
    while(n!=0){
      int k = n % 10;
      temp = 10 * temp + k;
      n = n / 10;
    }
    return temp;
}

int beautifulDays(int i, int j, int k) {

    int count = 0;
    for(int p = i; p<=j;p++){

        int temp = reverse_number(p);

        int diff = abs(p-temp);
        cout << diff << endl;
        if(diff%k == 0){
            count++;
        }
    }
    return count;

}

int main(){
  // string k = "abcdxyz";
  int res = beautifulDays(20,23,6);
  // int res = reverse_number(100);
  cout << res << endl;
  // cout << 18%6 << endl;

}
