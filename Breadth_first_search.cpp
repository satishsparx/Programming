#include <iostream>
#include <vector>
#include <queue>
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

  queue<int> q;
  int visited_array[vertices];

  q.push(0); // Inserting the first vertex in the queue
  for(int i=0;i<vertices;i++){
    visited_array[i] = 0;
  }
  visited_array[2] = 1;  // Indicating the first vertex as visited;

  while(!q.empty()){
    int node = q.front();
    cout << "Node to be processed: " << node << endl;
    q.pop();
    for(int i=0;i<adjacency_list[node].size();i++){
      if(visited_array[adjacency_list[node][i]] == 0){
        q.push(adjacency_list[node][i]);
        visited_array[adjacency_list[node][i]] = 1;
      }
    }
  }

  for(int j=0;j<vertices;j++){
    cout << visited_array[j] << " ";
  }

}
