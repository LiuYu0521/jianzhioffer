/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        stack<ListNode *> nodes;
        vector<int> v;
        ListNode* p = head;
        while(p != nullptr)
        {
            nodes.push(p);
            p = p->next;
        }
        while(!nodes.empty())
        {
            v.push_back(nodes.top()->val);
            nodes.pop();
        }
        return v;
    }
};
