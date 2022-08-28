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
    ListNode* middleNode(ListNode* head) {
        int cnt=1;
        ListNode* current = head;
        while(current->next != nullptr){
            cnt++;
            current = current->next;
        }
        cnt=cnt/2;
        int idx=0;
        current = head;
        while(current->next != nullptr){
            idx++;
            current = current->next;
            if(idx==cnt) break;
        }
        return current;
    }
};