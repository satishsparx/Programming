//Insertion sort
// Time complexity: O(n^2)
// Space compexity: O(1)

#include <iostream>
#include <vector>
#include "./Headerfiles/Helperfunctions.h"

const int SIZE = 5;
const int MOD = 100;

int main(){
  vector<int> vec;
  read(vec,SIZE,MOD);
  display(vec);

  for(int i=1;i<SIZE;i++){
    int index = i;
    int flag = 0;
    for(int j=i-1;j>=0;j--){
      if(vec[index] < vec[j]){
        swap(vec,index,j);
        flag = 1;
      }
      index = j;
    }
  }
  display(vec);
}
