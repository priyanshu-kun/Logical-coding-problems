#include <iostream>
using namespace std;
#define ll long long int

class Linked_List {
    public:
        ll data;
        Linked_List* next;
    Linked_List() {
        this->next = NULL;
    }
    Linked_List(ll val) {
        this->data = val;
        this->next = NULL;
    }
    Linked_List* addNode(ll val,Linked_List * head) {
        if(head == NULL) {
            head = new Linked_List(val);
        }
        else {
            Linked_List * temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new Linked_List(val);
        }
        return head;
    }

    void print(Linked_List *head) {
        Linked_List * temp = head;
        while (temp != NULL)
        {
            cout << temp->data * 2 << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main() {
    
    Linked_List * head = NULL;
    ll i = 1;
    while (i <= 10) {
        head = head->addNode(i,head);   
        i++;
    }
    head->print(head);
    return 0;
}