#include <iostream>
using namespace std;

int LCS(char *a, char *b, int len1, int len2){
  int store[len1+1][len2+1];
  int max_val = 0;

  for(int i=0;i<=len1;i++){
    for(int j=0;j<=len2;j++){
      if(i == 0 || j == 0){
        store[i][j] = 0;
      }
      else if(a[i-1]==b[j-1]){
        store[i][j] = 1 + store[i-1][j-1];
        max_val = max(max_val,store[i][j]);
      }
      else{
        store[i][j] = store[i-1][j-1];
      }
    }
  }

  for(int p=0;p<=len1;p++){
    for(int q=0;q<=len2;q++){
      cout << store[p][q] << " ";
    }
    cout << endl;
  }
  return max_val;
}

int main(){
  char a[] = "satishkumar";
  char b[] = "katipkumarq";

  int n1 = strlen(a);
  int n2 = strlen(b);

  cout << "LCS of given strings are:" << LCS(a,b,n1,n2);

}
