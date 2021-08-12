#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:
    int top;
    int stackArray[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            this->stackArray[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }

    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        return false;
    }

    void push(int val)
    {
        if (this->isFull())
        {
            cout << "stack overflow!" << endl;
            return;
        }
        this->top++;
        this->stackArray[top] = val;
    }

    int pop()
    {
        if (this->isEmpty())
        {
            cout << "stack underflow!" << endl;
            return 0;
        }
        int val = this->stackArray[this->top];
        this->stackArray[top] = 0;
        this->top--;
        return val;
    }

    int count() {
        return this->top+1;
    }

    int peek(int pos) {
        if(this->isEmpty()) {
            cout << "stack underflow!" << endl;
            return 0;
        }
        return this->stackArray[pos];
    }

    void change(int pos,int val) {
        if(this->isEmpty()) {
            cout << "stack underflow!" << endl;
            return;
        }
        this->stackArray[pos] = val;
        cout << "value changed at location: " << pos << endl;
    }

    void display() {
        if(this->isEmpty()) {
            cout << "stack underflow!" << endl;
            return;
        }
        cout << "All values in the stack are: " << endl;
        for(int i = this->top; i >= 0; i--) {
            cout << this->stackArray[i] << endl;
        }
    }


};

int main()
{
    Stack s1;
    int option,position,value;
    do
    {
        cout << "What operation do you want to perform? select options number. Enter 0 to exit." << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()"<< endl;
        cout << "8. display()" << endl;
        cout << "9. clear Screen" << endl << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter an item to push in the stack: ";
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << "Pop function called - Poped value: " << s1.pop() << endl;
            break;
        case 3:
            if(s1.isEmpty()) {
                cout << "Stack is empty" << endl;
            }else {
                cout << "Stack is not empty" << endl;
            }
            break;
        case 4:
            if(s1.isFull()) {
                cout << "Stack is full" << endl;
            }else {
                cout << "Stack is not full" << endl;
            }
            break;
        case 5:
            cout << "Enter position of item you want to peek: ";
            cin >> position;
            cout << "Peed function called - value at position: " << s1.peek(position) << endl;
            break;
        case 6:
            cout << "Count function called - value at position: " << s1.count() << endl;
            break;
        case 7:
            cout << "Enter position of item you want to change: ";
            cin >> position;
            cout << endl;
            cout << "Enter value of item you want to change: ";
            cin >> value;
            s1.change(position,value);
            break;
        case 8:
            cout << "Display function called: " << endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "Enter proper option number: "<< endl;
            break;
        }
    } while (option);
    
    return 0;
}
