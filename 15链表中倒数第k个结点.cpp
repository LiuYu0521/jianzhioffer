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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead == nullptr || k ==0)
            return nullptr;
        ListNode* pHead = pListHead;
        ListNode* pBehind = nullptr;
        for(uint i = 0; i < k-1; i++)
        {
            if(pHead->next != nullptr)
                pHead = pHead->next;
            else
                return nullptr;
        }
        pBehind = pListHead;
        while(pHead->next != nullptr)
        {
            pHead = pHead->next;
            pBehind = pBehind->next;
        }
        return pBehind;
    }
};
