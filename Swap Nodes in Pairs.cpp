/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* pre = head;
        ListNode* cur = head;
        int intermediate=0, count=1;
        
        if(head == NULL || head -> next == NULL)
            return head;
        
        
        while(cur != NULL)
        {
            count++;
            cur = cur -> next;
            
            if(count % 2 == 0 && cur != NULL)
            {
                intermediate = pre -> val;
                pre -> val = cur -> val;
                cur -> val = intermediate;
            }
            pre = pre -> next;
            
        }
        return head;
        
    }
};