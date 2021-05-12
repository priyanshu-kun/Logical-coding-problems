#include <iostream>
using namespace std;
#define ll long long int
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

class Linked_List {
    public:
        // int this variable we store data for linkedlist 
        ll data;
        // temp is a pointer who store memory address of next node of Linked_List type 
        Linked_List *next;
        // for set default value of pointer
        Linked_List() {
            this->next = NULL;
        }
        // setting data and null part in node
        Linked_List(ll data) {
            this->data = data;
            this->next = NULL;
        }
        Linked_List *add(ll data,Linked_List *head) {
            // CASE: 1 - if there is no head in linkedlist
            if(head == NULL) {
                Linked_List *temp = new Linked_List(data);
                head = temp;
            }
            else {
                // CASE: 2 if linkedlist has head then add new node onto the edge of linkedlist
                Linked_List *temp = head;
                while(temp->next != NULL) {
                    temp = temp->next;
                    temp->next = new Linked_List(data);
                }
            }
            return head;
        }
        void print(Linked_List *head) {
            auto temp = head;
            while(temp != NULL) {
                cout << "BOOM"<< endl;
                cout << temp->data << " ";
                temp=temp->next;
            }
            cout << endl;
        }

};

int main() {
    // cout << "BOOM";
    // take_input;
    // fast;
    Linked_List *head = NULL;
    head=head->add(1,head);
    head=head->add(2,head);
    head=head->add(3,head);
    head=head->add(4,head);
    head=head->add(5,head);
    head=head->add(6,head);
    head->print(head);
    return 0;
}