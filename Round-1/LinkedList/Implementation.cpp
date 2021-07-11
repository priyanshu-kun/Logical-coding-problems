#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long int

class Linked_List
{
public:
    Linked_List *prev;
    ll data;
    Linked_List *next;
    Linked_List()
    {
        this->prev = NULL;
        this->next = NULL;
    }
    Linked_List(ll val)
    {
        this->prev = NULL;
        this->data = val;
        this->next = NULL;
    }
    void addNode(ll val, Linked_List *&head)
    {
        if (head == NULL)
        {
            head = new Linked_List(val);
        }
        else
        {
            Linked_List *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new Linked_List(val);
            temp->next->prev = temp;
        }
    }

    void printForward(Linked_List *head)
    {
        Linked_List *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void printBackward(Linked_List *tail)
    {
        Linked_List *temp = tail;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

    Linked_List *getTail(Linked_List *head)
    {
        Linked_List *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        return temp;
    }

    /**
 * slow and fast pointer for get middle of linkedlist
 * 
 * @param: copy of head
 * @return: middle of linked list
 * 
 * */
    Linked_List *findMiddleOfLinkedList(Linked_List *head)
    {
        Linked_List *slow = head;
        Linked_List *fast = head;
        while (fast != NULL and fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    /**
 * Delete middle of linkedlist
 * 
 * @param: Address of head
 * @return: void
 * 
 * */
    void deleteMiddleElement(Linked_List *&head)
    {
        /**
         * 
         * My way to delete middle element
         * 
         * Linked_List * middle = head->findMiddleOfLinkedList(head);
         * Linked_List * temp = head;
         * while(temp->next != middle) {
         *   temp = temp->next;
         * }
         * temp->next = temp->next->next;
         * delete middle;
        */

        Linked_List *sp = head, *fp = head, *pre = head;
        while (fp != NULL and fp->next != NULL)
        {
            pre = sp;
            sp = sp->next;
            fp = fp->next->next;
        }
        pre->next = sp->next;
        delete sp;
    }

    /**
 * slow and fast pointer for get middle of linkedlist
 * 
 * @param: delete linkedlist
 * @return: void
 * 
 * */
    void deleteLinkedList(Linked_List *&head)
    {
        Linked_List *pre = head;
        head = head->next;
        while (head != NULL)
        {
            delete pre;
            pre = head;
            head = head->next;
        }
        delete pre;
    }

    void printLinkedListInReverse(Linked_List *head) {
        if(head == NULL) {
            return;
        }
        printLinkedListInReverse(head->next);
        cout << head->data << " ";

    }
    void reverseLinkedList(Linked_List *&head) {
        Linked_List * cur = head,*pre = NULL,*next = head;
        while(cur) {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur=next;
        }
        head = pre;
    } 
    void removeDuplicates(Linked_List *&head) {
        auto cur = head;
        while(cur->next) {
            if(cur->data == cur->next->data) {
                auto temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
            }
            else {
                cur = cur->next;
            }
        }
    }

    void removeDuplicateUnOrderd(Linked_List *&head) {
        set <int>s;
        auto cur = head,prv = cur; 
        while(cur->next) {

        }
    }
};

int main()
{
    Linked_List *head = NULL;
    ll i = 0;
    static int arr [] = {1,2,2,2,3,4,5,5};
    vector <int>vec(arr, arr + sizeof(arr) / sizeof(arr[0]) );
    while (i < vec.size())
    {
        head->addNode(vec[i], head);
        i++;
    }
    head->printForward(head);
    // auto tail = head->getTail(head);
    // head->printBackward(tail);
    // auto middle1 = head->findMiddleOfLinkedList(head);
    // cout << "Middle: " << middle1->data << endl;
    // head->deleteMiddleElement(head);
    // head->printForward(head);
    // head->deleteLinkedList(head);
    // if (head == NULL)
    // {
    //     cout << "List is empty!" << endl;
    //     return 0;
    // }
    // head->printLinkedListInReverse(head);
    // cout << endl;
    // head->reverseLinkedList(head);
    head->removeDuplicates(head);
    head->printForward(head);
    return 0;
}