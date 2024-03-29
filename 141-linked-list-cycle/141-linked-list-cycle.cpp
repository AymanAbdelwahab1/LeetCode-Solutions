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
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> mp;
        while(head!=nullptr){
            if(mp[head])
                return true;
            mp[head]++;
            head=head->next;
        }
        return false;
    }
};