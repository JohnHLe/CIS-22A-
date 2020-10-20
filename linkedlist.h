#pragma once
#ifndef LIST_H
#define LIST_H

#include <string>

using namespace std;

// node structs to hold data

struct ChildNode
{
    std::string word;
    int counter = 0;
    ChildNode* next; 
    // needs contructor to initialize variables 
};
struct Node
{
    char letter;
    Node* next;
    ChildNode* down = new ChildNode;
    // needs contructor to initialize variables 
};

class LinkedList
{
private:
    Node* head; // Stores head of linked list
public:
    LinkedList(); // Default constructor sets head to null

    void insert(char l); 
    void insertWord(std::string& w);
    void print();
};

#endif
