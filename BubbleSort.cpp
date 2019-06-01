// Bubble sort
// Time complexity: O(n^2) for the random sequence, O(n) for the increasing sequence
// Space complexity: O(1)

#include <iostream>
#include <vector>
#include "./Headerfiles/Helperfunctions.h"
using namespace std;
const int SIZE = 20;
const int MOD = 100;

int main(){
  vector<int> vec;
  read(vec,SIZE,MOD);
  display(vec);

  int flag = 0;

  for(int j=SIZE-1;j>0;j--){
    for(int i=0;i<j;i++){
      if(vec[i] > vec[i+1]){
        swap(vec,i,i+1);
        flag = 1;
      }
    }
    if(flag == 0) {
      break;
    }
  }

  display(vec);
}
