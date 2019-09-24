#include <iostream>
using namespace std;

char firstCapitalLetter(string s){
  if(s[0] == '\0')
    return 0;
  if(isupper(s[0]))
    return s[0];
  return firstCapitalLetter(s+1);
}

int main(){
  string s = "satish kumar";

  char c = firstCapitalLetter(s);

  cout << "First capital letter is:" << c;

}
