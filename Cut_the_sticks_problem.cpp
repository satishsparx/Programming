#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

int nonZeroMinValue(vector<int> arr){
    int min = 10000;

    for(int i=1;i<arr.size();i++){
        if(arr[i]!=0 && arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int countNonZeroes(vector<int> vec){
    int count = 0;
    for(int i=0;i<vec.size();i++){
        if(vec[i] != 0){
            count++;
        }
    }
    return count;
}

// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {

    vector<int> temp;

    // int c = countNonZeroes(arr);
    while(countNonZeroes(arr) >= 1){

       // for(int s=0;s<arr.size();s++){
       //   cout << arr[s] << " ";
       // }
       // cout << endl;

       temp.push_back(countNonZeroes(arr));

       int minValue = nonZeroMinValue(arr);
       for(int i=0;i<arr.size();i++){
            if(arr[i]-minValue > 0) {
                arr[i] -= minValue;
            }
            else{
                arr[i] = 0;
            }
       }
    }
    // temp.push_back(1);
    return temp;
}

int main(){
  vector<int> vec;
  vector<int> t;

  vec.push_back(5);
  vec.push_back(4);
  vec.push_back(4);
  vec.push_back(2);
  vec.push_back(2);
  vec.push_back(8);
  // vec.push_back(2);
  // vec.push_back(1);

  t = cutTheSticks(vec);

  // for(int i=0;i<t.size();i++){
  //   cout << t[i] << endl;
  // }
}
