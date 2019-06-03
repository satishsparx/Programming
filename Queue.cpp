#include <iostream>
using namespace std;

struct Node{
  int data;
  struct Node *next;
};

void show(struct Node *head){

  if(!head){
    cout << "Queue is empty" <<endl;
  }
  while(head){
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

struct Node * delete_node(struct Node *head){
  struct Node *t;
  if(!head){
    cout << "Queue is empty" << endl;
  }
  else{
    t = head;
    head = head->next;
    free(t);
  }
  return head;
}

struct Node* create_node(int data){
  struct Node *node = new Node;
  node->data = data;
  node->next = NULL;
  return node;
}

int main(){
  struct Node *head=NULL,*ptr,*temp;

  char option;

  do{
    cout << "Please enter the option:" << endl;
    cout << "1.Show 2.Insert 3.Delete 4.Exit" <<endl;
    cin >> option;
    switch(option){
      case '1': show(head);
              break;
      case '2': cout << "Please enter the value:";
              int val;
              cin >> val;
              temp = create_node(val);

              if(!head){
                head = temp;
                ptr = head;
              }
              else{
                ptr->next = temp;
                ptr = temp;
              }
              break;
      case '3': head = delete_node(head);
              break;
      case '4':exit(1);
      default: cout << "Please enter the valid option"<< endl;
               break;
    }
  }while(option!='4');
}
