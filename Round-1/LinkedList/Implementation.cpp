#include <iostream>
using namespace std;
#define ll long long int

class Linked_List {
    public:
        Linked_List * prev;
        ll data;
        Linked_List* next;
    Linked_List() {
        this->prev = NULL;
        this->next = NULL;
    }
    Linked_List(ll val) {
        this->prev = NULL;
        this->data = val;
        this->next = NULL;
    }
    void addNode(ll val,Linked_List * &head) {
        if(head == NULL) {
            head = new Linked_List(val);
        }
        else {
            Linked_List * temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new Linked_List(val);
            temp->next->prev = temp;
        }
       
    }

    void printForward(Linked_List *head) {
        Linked_List * temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void printBackward(Linked_List *tail) {
        Linked_List * temp = tail;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

    Linked_List * getTail(Linked_List *head) {
        Linked_List * temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        return temp;
    }

// slow and fast pointer for get middle of linkedlist
    Linked_List * findMiddleOfLinkedList(Linked_List *head) {
        Linked_List * slow = head;
        Linked_List * fast = head;
        while(fast != NULL and fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};


int main() {
    
    Linked_List * head = NULL;
    ll i = 1;
    while (i <= 5) {
        head->addNode(i,head);   
        i++;
    }
    head->printForward(head);
    auto tail = head->getTail(head);
    head->printBackward(tail);
    auto middle = head->findMiddleOfLinkedList(head);
    cout << "Middle: " << middle->data << endl;
    return 0;
}