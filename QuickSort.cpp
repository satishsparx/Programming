#include <iostream>
#include <vector>
#include "./Headerfiles/Helperfunctions.h"

const int SIZE = 10;
const int MOD = 100;

int partition(vector<int> &b, int low,int high){
  int pivot = b[high];
  int ind = low-1;

  for(int i=low;i<high;i++){
    if(b[i]<=pivot){
      ind++;
      swap(b,ind,i);
    }
  }
  swap(b,ind+1,high);
  return (ind+1);
}

void quicksort(vector<int> &a, int low, int high){
  if(low<high){
    int index = partition(a,low,high);
    quicksort(a,low,index-1);
    quicksort(a,index+1,high);
  }
}

int main(){
  vector<int> vec;
  read(vec,SIZE,MOD);
  display(vec);

  int low = 0;
  int high = vec.size()-1;

  quicksort(vec,low,high);

  display(vec);
}
