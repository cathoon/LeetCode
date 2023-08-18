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
    set<ListNode*> List;
    bool hasCycle(ListNode *head) {
        if(nullptr == head || nullptr == head->next)
            return false;

        if(true == List.count(head))
            return true;

        List.insert(head);
        
        return hasCycle(head->next);
    }
};