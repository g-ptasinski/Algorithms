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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        std::set<ListNode*> hashset;

        while(headA != nullptr)
        {
            hashset.insert(headA);
            headA = headA->next;
        }

        while(headB != nullptr)
        {
            if(hashset.find(headB) != hashset.end())
            {
                return headB;
            }

            headB = headB->next;
        }


        return nullptr; 
    }
};
