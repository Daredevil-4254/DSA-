
#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution {
private:
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        while (head) {
            Node* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }

public:
    Node* addTwoLists(Node* head1, Node* head2) {

        // Reverse both lists
        head1 = reverseList(head1);
        head2 = reverseList(head2);

        int carry = 0;
        Node* dummy = new Node(0);
        Node* tail = dummy;

        while (head1 || head2 || carry) {
            int sum = carry;

            if (head1) {
                sum += head1->data;
                head1 = head1->next;
            }
            if (head2) {
                sum += head2->data;
                head2 = head2->next;
            }

            carry = sum / 10;
            tail->next = new Node(sum % 10);
            tail = tail->next;
        }

        // Reverse result
        Node* result = reverseList(dummy->next);

        // Remove leading zeros
        while (result && result->data == 0 && result->next) {
            result = result->next;
        }

        return result;
    }
};
