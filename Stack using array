#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

class Stack{
    int size;
    vector<int> buffer;
    int top = -1;
    bool isEmpty = true;
    bool isFull = false;

public:
    Stack(int size){
        this->size = size;
        buffer.resize(size);
    }

public:
    void push(int item){
        if (top >= size - 1){
            cout << "stack overflow" << endl;
        }
        else{
            top += 1;
            buffer[top] = item;
        }
    }

public:
    void pop(){
        if (top <= -1){
            cout << "stack underflow" << endl;
        }
        else{
            top -= 1;
        }
    }

public:
    void display(){
        if (top <= -1){
            cout << "Stack is empty" << endl;
        }
        else{
            cout << "Elements in the stack are: ";
            cout << "[";
            for (int i = 0; i <= top; i++){
                cout << buffer[i] << ",";
            }
            cout <<"\b"<< "]\n";
        }
    }
};

int main() {

        Stack stack(4);
        stack.push(1);
        stack.push(3);
        stack.push(8);
        stack.push(11);
        stack.pop();
        stack.push(10);

        stack.display();

        return 0;
}
