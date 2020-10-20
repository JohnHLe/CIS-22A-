#pragma once 
#include "linkedlist.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

// Default constructor sets head and tail to null
LinkedList::LinkedList()
{
}

//// Insert(int val): Inserts the int val into list, at the head of the list. Note that there may be multiple copies of val in the list.
//// Input: Int to insert into the linked list
//// Output: Void, just inserts new Node
//void LinkedList::append(char l)
//{
//    Node* to_add = new Node; // creates new Node
//    Node* currPtr = head;
//    to_add->letter = l;
//    to_add->next = nullptr;
//    if (head == nullptr)
//    {
//        head = to_add;
//        return;
//    }
//
//    while (currPtr->next != nullptr)
//    {
//        currPtr = currPtr->next;
//    }
//    currPtr->next = to_add; 
//}

void LinkedList::insert(char l) // inserts the letter into big ll
{
    Node* newNode = new Node;
    newNode->letter = l;
    newNode->next = head;
    head = newNode;             // make new node the new head
    std::cout << newNode->letter << std::endl;
    return;
}
void LinkedList::insertWord(std::string &w)
{
    bool foundLetter = false;
    Node* currPtr = head;
    head->down = nullptr;
    ChildNode* chPtr = head->down;
    char l = w[0];

    while (currPtr != nullptr) // traverse through main list (letter list)
    {
        if (currPtr->letter == l) 
        {
            foundLetter = true; 

            if (currPtr->down == nullptr)
            {
                currPtr->down = new ChildNode;  
                currPtr->down->next = nullptr;
                currPtr->down->word = w;
                currPtr->down->counter += 1;
                cout << currPtr->down->word;
                cout << currPtr->down->counter;
            }
            chPtr = currPtr->down;

            while (chPtr != nullptr) // traverse child list
            {             
                if (chPtr->word != w) // checks child node for word 
                    chPtr = new ChildNode;

                if (chPtr->word == w)
                {

                    chPtr->counter += 1;
                    cout << chPtr->word;
                    cout << chPtr->counter;
                }
                chPtr = chPtr->next;
            }
        }
        currPtr = currPtr->next;
    }    
    if (!foundLetter)
    {
        Node* newNode = new Node;
        insert(l);
        insertWord(w);
    }
    return;
}

void LinkedList::print()
{

    return;
}