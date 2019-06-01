#include <time.h>
using namespace std;

void read(vector<int> &vec, int size, int mod){
  srand(time(0));
  for(int i=0;i<size;i++){
    vec.push_back(rand()%mod);
  }
}

void display(vector<int> &vec){
  for(int i=0;i<vec.size();i++){
    cout << vec[i] << " ";
  }
  cout << endl;
}

void swap(vector<int> &vec, int firstIndex, int secondIndex){
  int temp = vec[firstIndex];
  vec[firstIndex] = vec[secondIndex];
  vec[secondIndex] = temp;
}
