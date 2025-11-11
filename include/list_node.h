#ifndef LIST_NODE_H
#define LIST_NODE_H
#include <iostream>

struct ListNode {
    int val;
    ListNode* next;

    ListNode();
    ListNode(int x);
    ListNode(int x, ListNode* next);
};

// helper functions
ListNode* createList(std::initializer_list<int> values);
void printList(ListNode* head);

#endif