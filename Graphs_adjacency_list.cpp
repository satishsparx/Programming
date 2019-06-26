#include <iostream>
#include <vector>
using namespace std;

int main(){
  cout << "No of verices:" << endl;
  int vertices, edges;
  cin >> vertices;
  cout << "No of edges:" << endl;
  cin >> edges;

  vector<int> adjacency_list[vertices];

  for(int i=0;i<edges;i++){
    cout << "Please enter the vertices to make an edge: ";
    int vertex1,vertex2;
    cin >> vertex1 >> vertex2;
    adjacency_list[vertex1].push_back(vertex2);
  }

  for(int i=0;i<vertices;i++){
    cout << "Node "<< i << ":";
    for(int j=0;j<adjacency_list[i].size();j++){
      if(j != adjacency_list[i].size()-1)
        cout << adjacency_list[i][j] << "-->";
      else
        cout << adjacency_list[i][j];
    }
    cout << endl;
  }
}
