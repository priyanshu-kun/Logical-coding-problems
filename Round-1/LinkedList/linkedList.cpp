#include <iostream>
using namespace std;
#define ll long long int

class Node {
    public:
        ll data;
        Node * next;
    public:
        Node(ll val) {
            this->data = val;
            this->next = NULL;
        }
        Node * addNodes(ll val,Node *head) {
            if(!head) {
                head = new Node(val);
                return head;
            }
            auto temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new Node(val);
            return head;
        }
        void printNode(Node * head) {
            auto temp = head;
            while(temp) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        Node * findMiddle(Node * head) {
            auto fast = head;
            auto slow = head;
            while(fast and fast->next) {
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }

        void reverseList(Node * &middle) {
            Node * pre = NULL;
            Node * cur = middle;
            Node * next = middle;
            while (cur)
            {
                next = next->next;
                cur->next = pre;
                pre = cur;
                cur = next;
            }
            middle = pre;
        }

        Node * deleteList(Node * head) {
            auto pre = head;
            head = head->next;
            while(head) {
                delete pre;
                pre = head;
                head = head->next;
            }
            delete pre;
            return head;
        }
};


int main(int argc, char const *argv[]) {

    Node * head;
    Node * middle = NULL;
    Node * list = NULL;
    head=head->addNodes(5,head);
    head=head->addNodes(4,head);
    head=head->addNodes(3,head);
    head=head->addNodes(2,head);
    head=head->addNodes(1,head);
    head=head->addNodes(12,head);
    head=head->addNodes(21,head);
    head=head->addNodes(33,head);
    head=head->addNodes(37,head);
    head=head->addNodes(87,head);
    head=head->addNodes(67,head);
    head=head->addNodes(77,head);
    head->printNode(head);
    middle = head->findMiddle(head);
    middle = middle->next;
    head->reverseList(middle);
    head->printNode(head);
    // head = head->deleteList(head);
    // if(!head) {
    //     cout << "List is empty!" << endl;
    // }
    return 0;
}