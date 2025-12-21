#include <cstddef>
#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int d) {
    data = d;
    next = NULL;
  }
};
void insertAtHead(Node *&head, int data) {
  Node *temp = new Node(data);
  temp->next = head;
  head = temp;
}
void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
void insertAtEnd(Node *&head, int data) {
  Node *newNode = new Node(2);
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
}

void insertAtPosition(Node *&head, int position, int data) {}

int main() {
  Node *head = new Node(1);
  
  insertAtHead(head, 0);
  print(head);
  insertAtEnd(head, 2);
  print(head);
}
