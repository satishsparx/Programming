// Normal recursion
#include <iostream>
using namespace std;

int LCS(char *a, char *b, int len1, int len2){
  if(len1 == -1 || len2 == -1)
    return 0;
  if(a[len1] == b[len2]){
    return 1 + LCS(a,b,len1-1,len2-1);
  }
  else{
    return max(LCS(a,b,len1-1,len2),LCS(a,b,len1,len2-1));
  }
}

int main(){
  char a[] = "satishkumar";
  char b[] = "stkm";

  int n1 = strlen(a);
  int n2 = strlen(b);

  cout << "LCS of given strings are:" << LCS(a,b,n1-1,n2-1);

}
