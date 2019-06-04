#include <iostream>
#include <vector>
#include <algorithm>
#include "./Headerfiles/Helperfunctions.h"
using namespace std;
const int SIZE = 10;
const int MOD = 100;

int binary_search(vector<int> &vec,int low,int high,int search_element){
  int mid = (low+high)/2;

  if(low<=high){
    if(vec[mid] == search_element){
      return mid;
    }
    else if(search_element < vec[mid]){
      return binary_search(vec,low,mid-1,search_element);
    }
    else {
      return binary_search(vec,mid+1,high,search_element);
    }
  }
  return -1;
}

int main(){
  vector<int> vec;
  read(vec,SIZE,MOD);
  sort(vec.begin(),vec.end());
  display(vec);

  int search_element;
  cout << "Please enter the value to search:";
  cin >> search_element;

  int ret_val = binary_search(vec,0,vec.size()-1,search_element);

  if(ret_val == -1){
    cout << "Element not found";
  }
  else
  {
    cout << "Element is found at postion:" << ret_val+1;
  }
}
