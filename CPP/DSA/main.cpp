#include <iostream>
#include "SinglyLinkedList.cpp"

using namespace std;

int main(){
    SinglyLinkedList sll;
    sll.insertAtFirst(5);
    sll.insertAtFirst(7);
    sll.insertAtPosition(9,1);
    sll.insertAtPosition(9,1);
    sll.printList();

    return 0;
}