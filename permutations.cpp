#include <iostream>
using namespace std;

void permutations(string s, int first, int last){

  if(first == last){
    cout << s << endl;
    return;
  }

  for(int i=first;i<=last;i++){
    swap(s[first],s[i]);
    permutations(s,first+1,last);
  }
}

int main(){
    string s = "abc";
    permutations(s,0,s.length()-1);
}
