#pragma once
struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    [[nodiscard]] int* getStats() const
    {
        auto out = new int[3];

        Node* current = this->head;

        int total = 0;
        int len = 0;
        int min = 0;
        int max = 0;

        while (current != nullptr)
        {
            total += current->data;
            min = current->data < min ? current->data : min;
            max = current->data > max ? current->data : max;
            ++len;

            current = current->next;
        }

        out[0] = min;
        out[1] = max;
        out[2] = total / len;

        return out;
    }

private:
    Node* head = nullptr;
};
