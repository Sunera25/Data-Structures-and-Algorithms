#include <iostream>
#include <chrono>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }
    int pop() {
        if (top == nullptr) {
            cout << "Stack underflow";
            exit(1);
        }
        Node* nodeToRemove = top;
        int data = nodeToRemove->data;
        top = top->next;
        delete nodeToRemove;
        return data;
    }
    void display() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Elements in the stack are: ";
        cout << "[";
        Node* currentNode = top;
        while (currentNode != nullptr) {
            cout << currentNode->data;
            if (currentNode->next != nullptr) {
                cout << ",";
            }
            currentNode = currentNode->next;
        }
        cout << "]\n";
    }
};

int main() {


    Stack stack;

    stack.push(8);
    stack.push(10);
    stack.push(5);
    stack.push(11);

    stack.pop();
    stack.pop();

    stack.push(4);
    stack.push(30);

    stack.display();

    return 0;
}
