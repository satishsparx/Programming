// Given string is palindrome or not using the recursion
#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(string s, int low, int high) {

  if(low<high){
    if(s[low]!=s[high]){
      return false;
    }
    else{
      return true && isPalindrome(s,low+1,high-1);
    }
  }
  return true;
}
int main(){
  string s ;
  cout << "Enter the string:";
  cin >> s;
  int leng = s.length();
  bool k = isPalindrome(s,0,leng-1);

  if(k==1){
    cout << "Given string is palindrome" <<endl;
  }
  else
    cout << "Given string is not palindrome" << endl;
}
