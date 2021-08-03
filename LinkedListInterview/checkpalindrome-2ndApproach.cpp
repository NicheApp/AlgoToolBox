ListNode* rev(ListNode* head){
    if(head->next == NULL){
        return head;
    }
    ListNode* temp = head->next;
    head->next = NULL;
    ListNode* newHead = rev(temp);
    temp->next = head;
    return newHead;
}

bool isPalindrome(ListNode* head) {
    ListNode* mid = head;
    ListNode* fast = head;
    while(fast && fast->next){
        mid = mid->next;
        fast = fast->next->next;
    }
    ListNode* temp = rev(mid);
    while(temp && head){
        if(temp->val != head->val){
            return false;
        }
        temp = temp->next;
        head = head->next;
    }
    return true;
}
};
