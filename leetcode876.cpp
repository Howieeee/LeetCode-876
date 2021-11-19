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
        int size =0;
        auto it = head;
        while(it!=NULL){
            size++;
            it = it->next;
        }
        
        auto it2 = head;
        int target = (size+1)%2 ==0 ? (size+1)/2 : (size+1)/2+1;
        int count = 0;
        while(it2 != NULL){
            count++;
            if(count == target)
                return it2;
            it2 =it2->next;
        }
        
        return it2;
    }
};
