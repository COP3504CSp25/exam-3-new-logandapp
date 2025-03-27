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
    
    LinkedList reverseList() const 
    {
        LinkedList out{};
        Node* current = this->head;
        while (current != nullptr)
        {
            if (out.head != nullptr)
            {
                out.addHead(current->data);
            }
            else
            {
                out.head = new Node;
                out.head->data = current->data;
                out.head->next = nullptr;
            }
        }
        return out;
    }

    Node* head = nullptr;
};
