#include <iostream>

class Stack {
private:
    int top; // Index of the top element
    int capacity; // Capacity of the stack
    int* array; // Dynamic array to store elements

public:
    // Constructor to initialize the stack
    Stack(int capacity) {
        this->capacity = capacity;
        this->top = -1; // Stack is initially empty
        this->array = new int[capacity];
    }

    // Destructor to free the dynamically allocated memory
    ~Stack() {
        delete[] array;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if the stack is full
    bool isFull() {
        return top == capacity - 1;
    }

    // Push an element onto the stack
    void push(int item) {
        if (isFull()) {
            std::cout << "Stack Overflow\n";
            return;
        }
        array[++top] = item;
        std::cout << item << " pushed to stack\n";
    }

    // Pop an element from the stack
    int pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow\n";
            return -1;
        }
        return array[top--];
    }

    // Get the top element of the stack without removing it
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty\n";
            return -1;
        }
        return array[top];
    }

    // Display all elements in the stack
    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty\n";
            return;
        }
        std::cout << "Elements in the stack: ";
        for (int i = top; i >= 0; --i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int capacity;
    std::cout << "Enter the capacity of the stack: ";
    std::cin >> capacity;

    Stack stack(capacity); // Creating a stack with user-defined capacity

    int choice, item;
    do {
        std::cout << "\nStack Operations:\n";
        std::cout << "1. Push\n";
        std::cout << "2. Pop\n";
        std::cout << "3. Peek\n";
        std::cout << "4. Display\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter element to push: ";
                std::cin >> item;
                stack.push(item);
                break;
            case 2:
                std::cout << "Popped element: " << stack.pop() << std::endl;
                break;
            case 3:
                std::cout << "Top element: " << stack.peek() << std::endl;
                break;
            case 4:
                stack.display();
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
