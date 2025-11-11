/* 
De Bai: 
Cho 2 danh sach lien ket khong rong bieu dien 2 so nguyen khong am. Cac chu so duoc luu theo thu tu dao nguoc va moi nut chua 1 chu so. Cong hai so va tra ve tong duoi dang danh sach lien ket.
Khong chua 0 dung dau 

Rang buoc: 
So luong chu so trong node [1, 100]
0 <= Node.val <= 9
*/
#include "../../include/list_node.h"


class Solution {
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); // dummy node on heap memory
        ListNode* current = dummy;
        int carry = 0;
        
        while (l1 != nullptr || l2 != nullptr || carry > 0) {
            int sum = carry;
            
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }
        
        ListNode* result = dummy->next;
        delete dummy;  // Critical: free dummy but can slow down the runtime
        return result;
    }
};