
struct node {
    int data;
    struct node* next;
}

void print_reverse(struct node* head) {
    if (!head)
        return;
    
    print_reverse(head->next);
    
    printf("%d ", head->data);
}
