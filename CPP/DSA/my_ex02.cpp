#include <iostream>
using namespace std;

struct Node{
    /* data */
    int data;
    Node* next;
};

Node* CreateLinkedList(){
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third ->next = fourth;
    fourth->data = 40;
    fourth-> next = NULL;

    return head;
}

int InsertAtFirst(Node*& head, int data1){
    Node* newNode = new Node;
    newNode->data = data1;
    newNode->next = head; // Link the new node to the current head
    head = newNode; // Update the head to point to the new node
    return 0;
}

int InsertAtLast(Node*& head, int data2){
    Node* newNode= new Node;
    newNode->data= data2;

    if(head == NULL){
        head = newNode;
        return 0;
    }

    Node* temp = head;

    while(temp->next != nullptr){
        temp = temp -> next;
    }
    newNode -> next = NULL;
    temp -> next = newNode;

    return 0;
}

int InsertAtPosition(Node*& head, int data3, int position){
    Node* newNode = new Node;
    newNode-> data = data3;

    if(position == 0){
        newNode -> next = head;
        head = newNode;
        return 0;
    }

    Node*temp = head;

    for(int i = 0; i<position -1; i++){

        if(temp == nullptr){
            cout << "Invalid position!" << endl;
            delete newNode;
            return 0;
        }
        temp = temp->next;
    }
    
    if(temp == nullptr){
        cout << "Invalid position!" << endl;
        delete newNode;
        return 0;
    }

    newNode -> next = temp -> next;
    temp -> next = newNode;

    return 0;
}

void Display(Node* head){

    Node* temp = head;

    while(temp != nullptr){

        cout << temp->data << " -> ";

        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main(){

    Node* head = CreateLinkedList();
    
    int data1;
    int data2;
    int data3;
    int position;

    cout<<"Enter your insert First Value: ";
    cin>>data1;
    cout<<endl;
    InsertAtFirst(head,data1);

    cout<<"Enter your insert Last Value: ";
    cin>>data2;
    cout<<endl;
    InsertAtLast(head,data2);


    cout<<"Enter your insert Position Value: ";
    cin>>data3;
    cout<<endl;

    cout << "Enter Position (0-based): ";
    cin >> position;
    InsertAtPosition(head,data3,position);

    cout << "Final Linked List: ";
    Display(head);

    return 0;
}
