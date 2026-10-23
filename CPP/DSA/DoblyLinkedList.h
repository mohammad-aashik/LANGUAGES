#include <iostream>
using namespace std;

// Node class for a Doubly Linked List
class Node {
    public:
    int elem;
    Node* next;
    Node* prev;

    Node(){
        elem = 0;
        next = NULL;
        prev = NULL;
    }

    Node(int data){
        elem = data;
        next = NULL;
    }
};

// Doubly Linked List Implementation
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertAtFirst(int data){
        Node* temp = new Node(data);
        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            temp -> next = head;
            head -> prev = temp;
            head = temp;
        }
        size++;
    }

    void insertAtLast(int data){
        Node* temp = new Node(data);
        if(tail == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail -> prev = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtPosition(int data, int position){
        
        if(position < 0 || position > size){
            cout << "Invalid position" << endl;
            return;
        }
        else if(position == 0){
            insertAtFirst(data);
            return;
        }
        else if(position == size){
            insertAtLast(data);
            return;
        }
        else{
            Node* temp = new Node(data);
            Node* current = head;
            for(int i = 0; i < position - 1; i++){
                current = current->next;
            }            
            temp -> next = current -> next;
            temp -> prev = current;
            current -> next = temp;

            size++;
        }
    }
    void deleteAtFirst(){
        if (head == NULL){
            cout << "List is empty"<< endl;
        }

        else {
            Node* temp = head;
            if(size == 1){
                delete temp;
                head = NULL;
                tail = NULL;
            }
            else{
                head = head -> next;
                head -> prev = NULL;
                delete temp;
            }
            size --;
        }
    }
    // Home Work : convert to dobly linked list
    
    void deleteAtLast(){
        if (head == NULL){
            cout << "List is empty"<< endl;
        }

        else {
            Node* temp = tail;
            if(size == 1){
                delete temp;
                head = NULL;
                tail = NULL;
            }
            else{
                Node* current = head;
                for (int i = 0; i < size - 2; i++){
                    current = current -> next;
                }
                current -> next = NULL;  
                current = tail;
                delete temp;
            }
            size --;
        }
    }

    void deleteAtPosition(int position){
        if (position < 0 || position >= size)
        {
            cout << "Invalid position" << endl;
            return;
        }

        // Delete first node
        if (position == 0)
        {
            deleteAtFirst();
            return;
        }

        // Delete last node
        if (position == size - 1)
        {
            deleteAtLast();
            return;
        }

        // Delete middle node
        Node* current = head;

        // Move current to the node BEFORE the node to delete
        for (int i = 0; i < position - 1; i++)
        {
            current = current->next;
        }

        Node* temp = current->next;

        current->next = temp->next;

        delete temp;

        size--;
    }

    // Home Work
    void deletWith(int elem){

        // delete with all 5, from the scratch
    }

    void search(int elem){
        
    }
    

    void printList(){
        Node* current = head;

        while(current != NULL){
            cout << current->elem << " | ";
            current = current->next;
        }

        cout << "NULL"<< endl;
    }
};

