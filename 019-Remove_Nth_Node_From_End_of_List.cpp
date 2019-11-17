/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* front = head;
        ListNode* back = head;
        for (int i = 0; i < n; i++) {
            if (front == NULL) {
                return head;
            }
            front = front->next;
        }
        
        //special case delete node is the head
        if (front == NULL) {
            head = head->next;
            return head;
        }
        
        while (front->next != NULL) {
            front = front->next;
            back = back->next;
        }
        
        back->next = back->next->next;
        return head;
    }
};
