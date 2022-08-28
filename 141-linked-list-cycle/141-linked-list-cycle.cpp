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
            if(!mp[head]){
                mp[head]++;
                head=head->next;
                continue;
            }
            else return true;
        }
        return false;
    }
};