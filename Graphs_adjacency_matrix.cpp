#include <iostream>
#include "./Headerfiles/Helperfunctions.h"

using namespace std;

int rows,cols;
int adjacency_matrix[1000][1000];

void read_matrix(){
  for(int i=0;i<=rows;i++){
    for(int j=i;j<=cols;j++){
      if(i==j){
        adjacency_matrix[i][j] = 0;
      }
      else if(i==0){
        adjacency_matrix[i][j] = j;
        adjacency_matrix[j][i] = j;
      }
      else{
        int val;
        cout << "Please enter the weight for the edge " << i << " and edge " << j << ": ";
        cin >> val;
        adjacency_matrix[i][j] = val;
        adjacency_matrix[j][i] = val;
      }
    }
  }
}

void display_matrix(){
  for(int i=0;i<=rows;i++){
    for(int j=0;j<=cols;j++){
      cout << adjacency_matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){

  cout << "Size of the matrix:" << endl;

  cin >> rows >> cols;

  read_matrix();
  display_matrix();


}
