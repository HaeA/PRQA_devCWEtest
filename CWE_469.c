//c 469

struct node {
int data;
struct node* next;
};

// Returns the number of nodes in a linked list from 

// the given pointer to the head of the list. 
int size(struct node* head) {
struct node* current = head;
struct node* tail;
while (current != NULL) {
tail = current;
current = current->next;
}
return tail - head;
}

// other methods for manipulating the list 
...

/* 이렇게 수정할 것
...

int size(struct node* head) {
struct node* current = head;
int count = 0;
while (current != NULL) {
count++;
current = current->next;
}
return count;
}
*/