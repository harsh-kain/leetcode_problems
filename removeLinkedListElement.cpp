
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * temp;
        while(head != NULL && head -> val == val){
            head = head -> next;
        }
        if(head == NULL){
            return NULL;
        }
        if(head -> val == val){
            head = head -> next;
        }

        else{
            ListNode * current = head;
            while(current -> next != NULL){
                if(current -> next -> val == val){
                    current -> next = current -> next -> next;
                    
                }
                else{
                    current = current -> next;

                }
                
            }
        }
        return head;
    }
};

int main()
{
    return 0;
}