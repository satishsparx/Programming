#include <iostream>
#include <typeinfo>
using namespace std;
// Note:: Sum of the individual digits of a number is equivalent to the remainder on divisible by 9 
int superDigit(string n, int k) {
    string str ="";
    for(int i=1;i<=k;i++){
        str += n;
    }
    while(str.length()!=1){
        int sum = 0;
        for(int i=0;i<str.length();i++){
            sum = sum + int(str[i])-'0';
        }
        str = to_string(sum);
    }
    return stoi(str);
}


int main(){
  string n = "123";
  int k = 3;

  int res = superDigit(n,k);

  cout << res;

}
