
struct node {
    int data;
    struct node* next;
}

// much clear than the iterative implementation
// but uses more memory and more stack space
// iterative solution will be faster in C
int get_length(struct node* head) {
    if (!head)
      return 0;
    
    return get_length(head->next);
}
