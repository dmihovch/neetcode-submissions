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
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        std::vector<ListNode*> vec;
        ListNode* cur = head;
        while(cur){
            vec.push_back(cur);
            cur=cur->next;
        } 

        head->next = nullptr;
        ListNode* tail = vec[vec.size()-1];
        cur=tail;
        for(int i = vec.size() - 2; i>=0; i--){
            cur->next=vec[i];
            cur=cur->next;
        }


        return tail;
    }
};
