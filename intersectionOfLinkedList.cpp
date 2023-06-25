#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * curr = headA;
        int lenA = 0 , lenB = 0;
        while(curr != NULL){
            lenA++;
            curr = curr -> next;
        }
        curr = headB;
        while(curr != NULL){
            lenB++;
            curr = curr -> next;
        }
        int diff = abs(lenA - lenB);
        if(lenA < lenB){
            while(diff >= 0){
                headB = headB -> next;
                diff--;
            }
        }
        else{
            while(diff >= 0){
                headA = headA -> next;
                diff--;
            }
        }

        while(headA && headB){
            if(headA == headB){
                return headA;
            }
            headA = headA -> next;
            headB = headB -> next;
        }
        return NULL;

    }
};
int main()
{
    return 0;
}