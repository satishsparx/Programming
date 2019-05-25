// Implementing the vectors using the STL in c++

// Methods available in vector container
// 1. push_back() : inserts the element at the end of the vector;
// 2. pop_back()  : Deletes the element at the end of the vector;
// 2. vec.begin() : pointer points to the first element in a vector;  vec is the vector provided
// 3. vec.end()   : pointer points to the last element in a vector;  vec is the vector provided
// 4. vec.size()  : Returns the size of the vector;
// 5. vec.empty() : Returns true if the vector is empty else return false;
// 6. vec.erase(iterator) : Deletes the element at the iterator and returns the iterator after that element.
// 7. vec.erase(begin_it,end_it) : Deletes the element for begin_it to end_it and returns the iterator after end_it
// 8. vec.front() : Returns a referene to a first element;
// 9. vec.back() : Returns a reference to a last element;
//10. vec.at(position) : Returns a reference to the element at position;
//10. vec.insert(address, val) : Inserts the element before the address specified
//11. vec1.swap(vec2) : Swaps two vectors

#include <iostream>
#include <vector>

using namespace std;

int main(){
   vector<int> vec;

   int n;
   cin >> n;

   for(int i=0;i<n;i++) {
     int val;
     cin >> val;
     vec.push_back(val);
   }

   for(int j=0;j<n;j++) {  //Iterate using index
     cout << vec[j] << " ";
   }

   vector<int>::iterator it = vec.begin(), del_ptr1, del_ptr2;

   cout << "Iterate through iterator" << endl;
   while(it!=vec.end()){   // Iterate using iterator variable
     cout << (*it) << " ";
     it++;
   }

   cout << "Size of the vector:"<< vec.size() << endl;
   cout << "Is the vector empty:" << vec.empty() << endl;
   // cout << "Removes all elements from the vector:" ;
   //
   // vec.clear(); // not working
   //
   // for(int i=0;i<n;i++)
   //  cout << vec[i] << " ";

   // del_ptr1 = vec.erase(vec.begin());  // Deletes the element at the given location
   // del_ptr2 = vec.erase(vec.begin()-1,vec.end()-1);
   // cout << (*del_ptr2);

   int a = vec.front();
   int b = vec.back();
   cout << "First element:"<< a << endl;
   cout << "Last element:"<< b << endl;
   cout << "Element at position 3:" << vec.at(2);

   // vec.insert(vec.begin()+1,100);
   //
   // for(int i=0;i<n;i++) {
   //   cout << vec[i] << endl;
   // }

}
