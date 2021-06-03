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
        List(ll val) {
            this->data = val;
            this->next = NULL;
        }
        List *addNode(ll val,List *head);
        void print(List *head);
};

List * List::addNode(ll val,List * head) {
    if(!head) {
        head = new List(val);
        return head;
    }
    auto temp = head;
    while(temp->next) {
        temp = temp->next;
    }
    temp->next = new List(val);
    return head;
}

void List::print(List * head) {
    auto temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    List * head;
    head = head->addNode(1,head);
    head = head->addNode(2,head);
    head = head->addNode(3,head);
    head = head->addNode(4,head);
    head = head->addNode(5,head);
    head = head->addNode(6,head);
    head->print(head);
    return 0;
}