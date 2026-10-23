#include <iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;
        Node* prev;

        Node(int value){
            data = value;
            next = nullptr;
            prev = nullptr;

        }

};

class DoublyLinkedList{

    private:
        Node* head;
        Node* tail;
        int size;

    public:
        DoublyLinkedList(){
            head = nullptr;
            tail = nullptr;
            size = 0;
        }

        void InsertAtFirst(int data1){
            Node* newNode = new Node(data1);

            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }

            else{
                newNode->next = head;
                head->prev = newNode;
                head = newNode;

            }
            size++;
        }

        void InsertAtLast(int data2){

            Node* newNode = new Node(data2);

            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                newNode ->prev = tail;
                tail = newNode;

            }
            size++;
        }

        void InsertAtPosition(int data3, int position){
            
            if(position < 0 || position>size){
                cout<<"Invalid Position"<<endl;
                return;
            }

            if(position == 0){
                InsertAtFirst(data3);
                return;
            }

            if(position == size){
                InsertAtLast(data3);
                return;
            }

            Node* temp = head;
            for(int i = 0; i < position - 1; i++){
                temp = temp -> next;
            }
            Node* newNode = new Node(data3);

            newNode -> next = temp->next;
            (temp->next)->prev = newNode;   
            newNode ->prev = temp;

            temp->next = newNode;

            size++;

        }

        void DeleteAtFirst(){
            if (head == nullptr){
                cout<<"Empty List"<<endl;
            }
            else{

                Node* temp = head;
                if(size ==1){
                    delete temp;
                    head = nullptr;
                    tail = nullptr;
                }
                else{
                    head = head->next;
                    head->prev = nullptr;
                    delete temp;
                }
                size --;
                
            }
            
        }

        void DeleteAtLast(){
            if(head == nullptr){
                cout<<"Empty List"<<endl;
            }
            else{
                Node* temp = tail;
                if(size == 1){
                    delete temp;
                    head = nullptr;
                    tail = nullptr;
                }
                else{
                    
                    tail= tail -> prev;
                    tail->next = nullptr;
                    delete temp;
                }
                size --;
            }
        } 

        void DeleteAtPosition(int pos){
            if(pos<0 || pos>=size){
                cout<<"invalid Position"<<endl;
                return;
            }
            else if(pos == 0){
                DeleteAtFirst();
                return;
            }
            else if(pos == size-1){
                DeleteAtLast();
                return;
            }
            else{
                Node* current = head;
                for(int i=0; i<pos-1; i++){
                    current = current->next;
                }
                Node* temp = current -> next;
                current->next = temp ->next;
                (temp->next)->prev = current;
                delete temp;
            }
            size --;
        }

        void Display(){

            Node* temp = head;

            while(temp != nullptr){
                cout<<temp->data<<"-->";
                temp = temp->next;
            }
            cout<< "NULL"<<endl;
        }
     

};

int main(){
    DoublyLinkedList D;

    int data1;
    int data2;
    int data3;
    int position;
    int pos;

    cout<<"Enter Your Insert First Data: ";
    cin>> data1;

    D.InsertAtFirst(30);
    D.InsertAtFirst(data1);

    cout<<"Enter Your Insert Last Data: ";
    cin>> data2;

    D.InsertAtLast(40);
    D.InsertAtLast(data2);

    cout<<"Enter Your Insert Position Data: ";
    cin>> data3;

    cout<<"Enter Your Position: ";
    cin>> position;

    D.InsertAtPosition(25,2);
    D.InsertAtPosition(data3,position);

    char choice;

    cout << "Do you want to delete at a position? (y/n): ";
    cin >> choice;

    if(choice == 'y' || choice == 'Y'){

        cout << "Enter position to delete: ";
        cin >> pos;

        D.DeleteAtPosition(pos);
    }

    cout<<"Your Lnked List: ";
    D.Display();

    return 0;


}