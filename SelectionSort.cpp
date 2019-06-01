// Selectionsort
// Time complexity: O(n^2) but the number of swaps will be O(n) in case the elements are in sorted order
// Space complexity: O(n)


#include <iostream>
#include <vector>
#include "./Headerfiles/Helperfunctions.h"

const int SIZE = 20;
const int MOD = 100;

using namespace std;

int main(){
  vector<int> vec;
  read(vec,SIZE,MOD);
  display(vec);

  for(int j=0;j<SIZE;j++){
    int index = j;
    int min_val = vec[j];
    for(int i=j;i<SIZE;i++){
      if(vec[i] < min_val) {
        index = i;
        min_val = vec[i];
      }
    }
    swap(vec,j,index);
  }

  display(vec);
}
