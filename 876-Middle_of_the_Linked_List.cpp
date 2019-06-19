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
    ListNode* middleNode(ListNode* head) {
        ListNode* back = head;
        ListNode* front = head;
        while (front != NULL && front->next != NULL) {
            back = back->next;
            front = front->next->next;
        }
        return back;
    }
};
