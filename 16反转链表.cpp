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
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead == nullptr || pHead->next == nullptr)
            return pHead;
        ListNode* pNewHead = nullptr;
        ListNode* pOldHead = pHead;
        ListNode* pNext = pHead->next;
        while(pOldHead)
        {
            pOldHead->next = pNewHead;
            pNewHead = pOldHead;
            pOldHead = pNext;
            if(pNext)
                pNext = pNext->next;
        }
        delete(pOldHead);
        delete(pNext);
        return pNewHead;
    }
};
