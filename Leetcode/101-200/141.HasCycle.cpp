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
        /*std::set<ListNode*> hashmap;
        ListNode* curr = head;

        if(curr == nullptr){return false;}
        
        while(curr->next!=nullptr)
        {
            if(hashmap.find(curr)!=hashmap.end())
            {
                return true;
            }
            else
            {
                hashmap.insert(curr);
                curr = curr->next;
            }
        }*/
        if(head == nullptr){return false;}

        ListNode* walker = head;
        ListNode* runner = head->next;

        while(runner != nullptr)
        {
            if(runner == walker){return true;}

            walker = walker->next;
            runner = runner->next;
            if(runner != nullptr){runner = runner->next;}
        }

        return false;
    }
};
