#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *link;

    Node(int value)
    {
        this->value = value;
        this->link = nullptr;
    }
};

class LinkedList
{
private:
    Node *firstNode;
    int count;

public:
    LinkedList()
    {
        firstNode = nullptr;
        count = 0;
    }

    void insertAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->link = firstNode;
        firstNode = newNode;
        cout << "\nList data add successfully....\n\n";
        count++;
    }

    void searchData(int index)
    {
        if (index < 0 || index >= count)
        {
            cout << "\nwrong data Index...\n";
            return;
        }

        Node *temp = firstNode;
        for (int i = 0; i < index; i++)
            temp = temp->link;

        cout << "Node is index " << index << " has value: " << temp->value << "\n\n";
    }

    void deleteAtPosition(int index)
    {
        if (firstNode == nullptr || count == 0)
        {
            cout << "\nList is empty.\n";
            return;
        }

        if (index < 0 || index >= count)
        {
            cout << "\n sorry....! Invalid position.\n";
            return;
        }

        if (index == 0)
        {
            Node *delNode = firstNode;
            firstNode = firstNode->link;
            delete delNode;
            count--;
            cout << "First node delete successfully...!\n\n";
            return;
        }
        else{
            cout << "\nNode not delete....sorry !! \n";
        }

        Node *prev = firstNode;
        for (int i = 0; i < index - 1; i++)
            prev = prev->link;

        Node *delNode = prev->link;
        prev->link = delNode->link;

        delete delNode;
        cout << "Node deleted successfully.\n\n";
        count--;
    }

    void reverseList()
    {
        Node *prev = nullptr;
        Node *curr = firstNode;
        Node *next = nullptr;

        while (curr != nullptr)
        {
            next = curr->link;
            curr->link = prev;
            prev = curr;
            curr = next;
        }

        firstNode = prev;
        cout << "\nList reversed successfully...\n";
        displayAll();
    }

    void displayAll()
    {
        if (firstNode == nullptr)
        {
            cout << "List is empty.\n\n";
            return;
        }

        Node *temp = firstNode;
        cout << "Linked List Elements: ";

        while (temp != nullptr)
        {
            cout << temp->value << " ";
            temp = temp->link;
        }
        cout << "\n\n";
    }
};
