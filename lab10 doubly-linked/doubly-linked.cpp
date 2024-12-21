#include "doubly-linked.h"
#include <iostream>

using namespace std;

List::List(void)
{
    first = nullptr;
}

List::~List(void)
{
    while (first != nullptr)
    {
        Node *temp = first;
        first = first->next;
        delete temp;
    }
}

void List::insert(int n)
{
    Node *newNode = new Node;
    newNode->val = n;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (first == nullptr)
    {
        first = newNode;
    }
    else
    {
        Node *temp = first;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void List::reverse(void){
    Node* temp = nullptr;
    Node* current = first;
    while (current != nullptr)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != nullptr)
    {
        first = temp->prev;
    }
}

void List::print(void)
{
    Node *temp = first;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
