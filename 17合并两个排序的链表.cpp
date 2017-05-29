/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(!pHead1)
            return pHead2;
        else if(!pHead2)
            return pHead1;
        ListNode* pMergeNode = nullptr;
        ListNode* ptemp = nullptr;
        while(pHead1 && pHead2)
        {
            if(!pMergeNode)
            {
                if(pHead1->val < pHead2->val)
                {
                    pMergeNode = pHead1;
                    ptemp = pMergeNode;
                    pHead1 = pHead1->next;
                }
                else
                {
                    pMergeNode = pHead2;
                    ptemp = pMergeNode;
                    pHead2 = pHead2->next;
                }
            }
            else
            {
                if(pHead1->val < pHead2->val)
                {
                    ptemp->next = pHead1;
                    ptemp = ptemp->next;
                    pHead1 = pHead1->next;
                }
                else
                {
                    ptemp->next = pHead2;
                    ptemp = ptemp->next;
                    pHead2 = pHead2->next;
                }
            }
        }
        if(pHead1)
            ptemp->next = pHead1;
        else if(pHead2)
            ptemp->next = pHead2;
        return pMergeNode;
    }
};
