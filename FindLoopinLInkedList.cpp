class Solution {
public:
    bool hasCycle(ListNode *head) {
        //Approach 1
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        //Approach 2:
        // if(head->next==NULL)return false;
        // map<int,bool>mp;
        // ListNode *temp= head;
        // while(temp){
        //     if(mp.count(temp->val)==0){
        //         return true;
        //     }
        //     mp[temp->val]= true;
        //     temp=temp->next;
        // }
        return false;
    }
};
