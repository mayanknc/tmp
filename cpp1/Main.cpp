#include <iostream>


using namespace std;





// Define the structure of a node


struct Node {


    int data;


    Node* next;


   


    // Constructor to initialize data and next pointer


    Node(int value) : data(value), next(nullptr) {}


};





// Function to insert a new node at the beginning of the linked list


void insertAtBeginning(Node*& head, int value) {


    // Create a new node and assign the value


    Node* newNode = new Node(value);


    // Make the new node point to the current head


    newNode->next = head;


    // Update the head to point to the new node


    head = newNode;


}





// Function to print all elements of the linked list


void printList(Node* head) {


    Node* current = head;


    while (current != nullptr) {


        cout << current->data << " ";


        current = current->next;


    }


    cout << endl;


}





int main() {


    Node* head = nullptr;


    int value;





    // Taking input for 5 nodes and inserting them at beginning


    for(int i=0;i<5;i++){


        std::cin >> value;


        insertAtBeginning(head,value);


    }


   


    // Print linked list


    printList(head);





    // Clean up: free memory by deleting all nodes


    Node* current = head;


    while (current != nullptr) {


        Node* temp = current;


        current = current->next;


        delete temp;


    }





    return 0;


}