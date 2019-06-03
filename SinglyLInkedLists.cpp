#include <iostream>
using namespace std;

struct Node{
  int data;
  struct Node *next;
};

void show(struct Node *head){

  if(!head){
    cout << "Linked list is empty" <<endl;
  }
  while(head){
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

int main(){

  struct Node *head=NULL, *ptr, *temp, *it, *t, *temp1;

  int option;

  do{
    cout << "Please select the option" << endl;
    cout << "1.Show 2.Insert 3.Delete 4.Exit"<< endl;

    cin >> option;

    switch(option){
      case 1: show(head);
              break;
      case 2: cout << "Please enter the value:";
              int val;
              cin >> val;
              temp = new Node;
              temp->data = val;
              temp->next = NULL;

              if(!head){
                head = temp;
                ptr = head;
              }
              else{
                ptr->next = temp;
                ptr = temp;
              }

              break;
      case 3: {
              cout << "Please enter the position of value to be deleted:";
              int pos;
              int count = 1;
              cin >> pos;

              t = head;
              if(pos==1){
                head = head->next;
                free(t);
              }
              else{
                while(count<(pos-1)){
                  count++;
                  t = t->next;
                }
                cout << count << endl;
                if((count+1) >= pos){
                  cout << "Please enter the valid position" << endl;
                }
                else{
                  temp1 = t->next;
                  t->next = temp1->next;
                  free(temp1);
                }
              }

            }

              break;
      case 4: exit(0);
    }
  }while(option!=4);
}
