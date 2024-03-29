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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start=head, *end=head;
        while(n>0){
            end = end->next;
            n--;
        }
        if(end == nullptr){
            return head->next;
        }
        while(end->next!=nullptr){
            end=end->next;
            start=start->next;
        }
        start->next=start->next->next;
        return head;
    }
};