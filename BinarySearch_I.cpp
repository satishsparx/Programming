#include <iostream>
#include <vector>
#include <algorithm>
#include "./Headerfiles/Helperfunctions.h"
using namespace std;
const int SIZE = 1000;
const int MOD = 10000;

int binary_search(vector<int> &vec, int search_val){
  int low = 0;
  int high = vec.size()-1;

  while(low<=high){
    int mid = (low+high)/2;

    if(vec[mid] == search_val){
      return mid;
    }
    else if(search_val<vec[mid]){
      high = mid-1;
    }
    else if(search_val>vec[mid]){
      low = mid+1;
    }
  }
  return -1;
}

int main(){
  vector<int> vec;
  read(vec,SIZE,MOD);
  // display(vec);

  sort(vec.begin(),vec.end());
  display(vec);

  int low = 0;
  int high = vec.size()-1;
  int search_val;

  cout << "Please enter the value to search:";
  cin >> search_val;

  int ret_val = binary_search(vec,search_val);

  if(ret_val == -1){
    cout << "Element not found";
  }
  else
  {
    cout << "Element is found at postion:" << ret_val+1;
  }
}
