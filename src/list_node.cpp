#include "../include/list_node.h"

// Constructor mặc định
ListNode::ListNode() : val(0), next(nullptr) {}

// Constructor khởi tạo giá trị
ListNode::ListNode(int x) : val(x), next(nullptr) {}

// Constructor khởi tạo giá trị và node tiếp theo
ListNode::ListNode(int x, ListNode* next) : val(x), next(next) {}

ListNode* createList(std::initializer_list<int> values) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int v : values) {
        ListNode* node = new ListNode(v);
        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        std::cout << head->val;
        if (head->next) std::cout << " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}
