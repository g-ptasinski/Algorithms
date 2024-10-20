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
    ListNode *detectCycle(ListNode *head) {
        std::set<ListNode*> hashset;

        if(head == nullptr)
        {
            return nullptr;
        }

        while(head->next != nullptr)
        {
            hashset.insert(head);

            if( hashset.find(head->next) != hashset.end() )
            {
                return head->next;
            }

            head = head->next;
        }

        return nullptr;
    }
};
