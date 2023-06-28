#include<iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode * temp = head;
        ListNode * fast = head;
        ListNode * slow = head;
        ListNode * first = head;

        while((k--)-1){
            fast = fast -> next;
            cout<<k<<endl;
        }
        first = fast;
        while(fast -> next != NULL){
            fast = fast ->next;
            slow = slow -> next;
        }
        swap(slow->val, first-> val);
        return head;
    }
};
int main()
{
    return 0;
}