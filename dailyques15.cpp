#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *a = new Node{1, NULL};
    Node *b = new Node{2, NULL};
    Node *c = new Node{3, NULL};
    Node *d = new Node{4, NULL};

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b;

    Node *slow = a;
    Node *fast = a;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "Cycle detected";
            return 0;
        }
    }

    cout << "No cycle";
    return 0;
}
