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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for(int i=0;i<lists.size();i++){
            while(lists[i]!=nullptr){
                v.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        if(!v.size()) return nullptr;
        sort(v.begin(),v.end());
        ListNode* ans = new ListNode();
        ListNode* res = ans;
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<v.size();i++){
            ans->val = v[i];
            if(i<v.size()-1){
                ans->next = new ListNode();
                ans = ans->next;
            } 
        }
        return res;
    }
};