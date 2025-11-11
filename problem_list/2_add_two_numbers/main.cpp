#include "../../include/list_node.h"
#include "solution.cpp" 

int main() {
    ListNode* l1 = createList({2, 4, 3});
    ListNode* l2 = createList({5, 6, 4});

    ListNode* result = Solution::addTwoNumbers(l1, l2);
    printList(result);
    return 0;
}
