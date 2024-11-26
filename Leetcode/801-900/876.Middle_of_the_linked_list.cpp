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
        ListNode* walker = head;
        ListNode* runner = head;

        while(runner != nullptr)
        {
            runner = runner->next;

            if(runner!=nullptr)
            {
                runner=runner->next;
            }
            else
            {
                return walker;
            }

            if(walker->next != nullptr)
            {
                walker = walker->next;
            }
            else
            {
                return walker;
            }          
        }

        return walker;
    }
};
