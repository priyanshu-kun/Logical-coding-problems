#include <iostream>
using namespace std;
#define ll long long int

class List {
    private:
      ll data;
      List * next;
    public:
        List() {
            this->next = NULL;
        }
        List(ll value) {
            this->data = value;
            this->next = NULL;
        }
        void addNode(ll value,List* &head);
        void printNode(List * &head);
};

void List::addNode(ll value,List * &head) {
    if(head == NULL) {
        head = new List(value);
        return;
    }
    auto temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new List(value);
}

void List::printNode(List * &head) {
    auto temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    List *head = NULL;
    head->addNode(1,head);
    head->addNode(2,head);
    head->addNode(3,head);
    head->addNode(4,head);
    head->printNode(head);
    return 0;
}