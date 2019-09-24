// Return the first capital letter
#include <iostream>
using namespace std;

int main(){
  string s = "satishkumaR";

  int i = 0;

  while(i<s.length()){

    if((int)s[i]>=65 && (int)s[i]<=90)
    {
      cout << s[i];
      break;
    }
    i++;
  }

}
