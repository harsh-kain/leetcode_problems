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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * ans = new ListNode (0);
        ListNode * curr = ans;
        ListNode * temp = head -> next;
        int sum = 0;
        while(temp != NULL){
            sum += temp -> val;
            if(temp -> val == 0){
                cout<<sum<<endl;
                curr -> next = new ListNode(sum);
                curr = curr -> next; 
                sum = 0; 
            }
            temp = temp -> next;
        }
        return ans-> next;
    }
};
int main()
{
    return 0;
}