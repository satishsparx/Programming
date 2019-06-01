#include <iostream>
#include <vector>
#include "./Headerfiles/Helperfunctions.h"

const int SIZE = 10;
const int MOD = 100;

void mergeLists(vector<int> &b, int low,int mid,int high) {
  vector<int> temp_list;

  int list1_low = low,
      list1_high = mid,
      list2_low = mid+1,
      list2_high = high;

  int index = 0;
  while(list1_low <= list1_high && list2_low <= list2_high) {

    if(b[list1_low] < b[list2_low]){
      temp_list.push_back(b[list1_low++]);
    }
    else{
      temp_list.push_back(b[list2_low++]);
    }
  }

  if(list1_low<=list1_high){
    for(int i=list1_low;i<=list1_high;i++){
      temp_list.push_back(b[i]);
    }
  }

  if(list2_low<=list2_high){
    for(int i=list2_low;i<=list2_high;i++){
      temp_list.push_back(b[i]);
    }
  }

  for(int i=0;i<=list2_high;i++){
    b[i+low] = temp_list[i];
  }

  display(b);

}

void mergeSort(vector<int> &a,int low,int high){
  int mid = (low+high)/2;
  if(low<high){
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    mergeLists(a,low,mid,high);
  }
}

int main(){
  vector<int> vec;
  read(vec,SIZE,MOD);
  display(vec);

  mergeSort(vec,0,vec.size()-1);

  display(vec);
}
