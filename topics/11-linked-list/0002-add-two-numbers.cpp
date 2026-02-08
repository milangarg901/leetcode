/*
LeetCode 2. Add Two Numbers
Approach:
- Traverse both linked lists together and keep carry.
- Build answer list digit by digit using (sum % 10).
- Continue while l1/l2/carry exists.

Time Complexity: O(max(n, m))
Space Complexity: O(max(n, m))  // output list
*/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* curr = &dummy;
        int carry = 0;

        while(l1 || l2 || carry){
            int sum = carry;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        return dummy.next;
    }
};
