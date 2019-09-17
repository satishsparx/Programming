#include <iostream>
#include <vector>
using namespace std;

int migratoryBirds(vector<int> arr){

  int max_count =1, min_index = 10000;

  for(int i=0;i<arr.size();i++){
    int count = 1, index = arr[i];
    for(int j=i+1;j<arr.size();j++){
      if(arr[i] == arr[i+1] && arr[j]!=-1){
        count++;
        arr[j] = -1;
        index = arr[i];
      }
    }
    if(max_count<count && index < min_index){
      max_count = count;
      min_index = index;
    }
  }

  return min_index;
}

int main(){
  vector<int> vec;
  int n;
  cin >> n;

  for(int i=0;i<n;i++){
    int t;
    cin >> t;
    vec.push_back(t);
  }

  cout << "Birds:" << migratoryBirds(vec);
}
