#include <iostream>
#include <cmath>
using namespace std;

int pageCount(int n, int p) {

   float count;
   if(p < (n-p)){
       count = float(p)/2;
   }
   else{
       count = float(n-p)/2;
   }
   cout << count <<endl;
   if(n%2 == 0){
       return int(ceil(count));
   }
   else{
       return int(count);
   }
}
int main(){
  int n;
  cin >> n;
  int p;
  cin >> p;
  int result = pageCount(n, p);
  cout << result << "\n";

  return 0;
}
