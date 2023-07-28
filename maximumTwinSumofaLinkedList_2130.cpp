#include<iostream>
#include<vector>
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
    int pairSum(ListNode* head) {
         int i,j,k,c=0;
        ListNode*s,*f;
        s=head;
        f=head;
        vector<int>v;

        while(f and f->next){
            v.push_back(s->val);
            s=s->next;
            f=f->next->next;

        }

        for(i=v.size()-1;i>=0;i--){
            v[i]+=s->val;
            s=s->next;
            if(!s)
            break;
        }
        for(i=0;i<v.size();i++){
            c=max(c,v[i]);
        }
        return c;
        
    
    }
};

int main()
{
    return 0;
}