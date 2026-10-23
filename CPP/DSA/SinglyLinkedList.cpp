// #include <iostream>
// using namespace std;

// int main(){

//     // Arrays
//     int b[5] = {1, 2, 3, 4, 5}; // Declare an integer array 'b' of size 5 and initialize it with values 1, 2, 3, 4, and 5

//     for (int i = 0; i < 5; i++) { // Loop through the array 'b' from index 0 to 4
//         cout << b[i] << " | "; // Output the value of each element in the array 'b'
//     }

//     cout<< endl; // Output a new line after printing all elements of the array 'b'


//     int c[4]; // Declare an integer array 'c' of size 4



//     for (int i = 0; i < 4; i++) { // Loop through the array 'c' from index 0 to 3
//         cout << i << " | "; // Prompt the user to enter a value for each element in the array 'c'   
//     }

//     cout<< endl; // Output a new line after prompting for all elements of the array 'c'



//     int d[5]; // Declare an integer array 'd' of size 5

//     for (int i = 0; i < 5; i++) { // Loop through the array 'd' from index 0 to 4
//         cout << d[i] << " | "; // Output the value of each element in the array 'd'
//     }

//     cout<< endl; // Output a new line after printing all elements of the array 'd'


//     int e[5] = { }; // Declare an integer array 'e' of size 5

//     for (int i = 0; i < 5; i++) { // Loop through the array 'e' from index 0 to 4
//         cout << e[i] << " | "; // Output the value of each element in the array 'e'
//     }

//     cout<< endl; // Output a new line after printing all elements of the array 'e'



//     int f[5] = {1, 2, 3}; // Declare an integer array 'f' of size 5 and initialize it with values 1, 2, 3, 4, and 5

//     for (int i = 0; i < 5; i++) { // Loop through the array 'f' from index 0 to 4
//         cout << f[i] << " | "; // Output the value of each element in the array 'f'
//     }

//     cout<< endl; // Output a new line after printing all elements of the array 'f'

//     return 0;
// }


#include <iostream>
using namespace std;

// Node class for a Singly Linked List
class Node {
    public:
    int elem;
    Node* next;

    Node(){
        elem = 0;
        next = NULL;
    }

    Node(int data){
        elem = data;
        next = NULL;
    }
};

// Singly Linked List Implementation
class SinglyLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    SinglyLinkedList(){
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
            temp->next = head;
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
            temp->next = current->next;
            current->next = temp;

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
                delete temp;
            }
            size --;
        }
    }
    
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

