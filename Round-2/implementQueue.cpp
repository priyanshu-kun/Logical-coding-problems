#include <iostream>
#include <string>

using namespace std;

class Queue
{
    private:
        int front;
        int rear;
        int arr[5];
        int size = sizeof(arr)/sizeof(int);

    public:
        Queue() {
            this->front = -1;
            this->rear = -1;
            for(int i = 0; i < this->size; i++) {
                arr[i] = 0;
            }
        }

        bool isEmpty() {
            if(front == -1 && rear == -1) {
                return true;
            }
            return false;
        }

        bool isFull() {
            if(rear == this->size) {
                return true;
            }
            return false;
        }
        void enqueue(int val) {
            if(isFull()) {
                cout << "Queue is Full" << endl;
                return;
            }
            else if(isEmpty()) {
                front = rear = 0;
            }else {
                rear++;
            }
            arr[rear] = val;
        }
        int dequeue() {
            int x;
            if(isEmpty()) {
                cout << "Queue is Empty" << endl;
            }
            else if (front == rear) {
                x = arr[front];
                arr[front] = 0;
                rear = front = -1;
            }
            else {
                x = arr[front];
                arr[front] = 0;
                front++;
            }
            return x;
        }
        int count() {
            return (rear-front+1);
        }
        void display() {
            if(isEmpty()) {
                cout << "Queue is Empty" << endl;
                return;
            }
            for(int i = 0; i < 5; i++) {
                cout << arr[i] << " ";
            }
        }
};

int main()
{
    Queue q1;
    int option, value;
    do
    {
        cout << "What operation do you want to perform? select options number. Enter 0 to exit." << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. count()" << endl;
        cout << "6. display()" << endl;
        cout << "7. clear Screen" << endl
             << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enqueue operations \n Enter an item to Enqueeue in the Queue: " << endl;
            cin >> value;
            q1.enqueue(value);
            break;
        case 2:
            cout << "Dequeue Operation \n Dequeued Value: " << q1.dequeue() << endl;
            break;
        case 3:
            if(q1.isEmpty()) {
                cout << "Queue is Empty" << endl;
            }else {
                cout << "Queue is not Empty" << endl;
            }
            break;
        case 4:
        if(q1.isFull()) {
                cout << "Queue is Full" << endl;
            }else {
                cout << "Queue is not full" << endl;
            }
            break;
        case 5:
            cout << "Count Operation \n numbers of items in queue: " << q1.count() << endl;
            break;
        case 6:
            cout << "Display values" << endl;
            q1.display();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter proper option number: " << endl;
            break;
        }
    } while (option);

    return 0;
}
