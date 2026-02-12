
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cleanup_pointer(void **p);

void check_pointer(void *p);


struct node {
    int data;
    int index;
    struct node *next;
};

struct int_list {
    struct node *head;
    struct node *last;
    int size;
};

// List functions
void add_to_list(struct int_list *list, int data);

struct int_list *init_int_list();

void print_nodes(struct node *head);

void remove_last(struct int_list *list);

void remove_at(struct int_list *list, int index);

int get(struct int_list *list, int index);

struct node* get_node(struct node *start ,int index);

int main(void){

    struct int_list *list;
    list = init_int_list();
    add_to_list(list, 10);
    add_to_list(list, 20);
    add_to_list(list, 30);

    // print_nodes(list->head);s

    int x;
    x = get(list, 0);
    printf("X is %d\n", x);

    return 0;
} 

void add_to_list(struct int_list *list, int data){
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->index = list->size;
    list->size++;
    
    // If first node in list
    if (list->head == NULL){
        list->head = temp;
        list->last = list->head;
        return;
    }

    list->last->next = temp;
    list->last = temp;

}

void print_nodes(struct node *head){
    struct node *curr;
    curr = head;
    printf("%d\n", curr->data);
    
    if(curr->next == NULL){
        return;
    }

    print_nodes(curr->next);
}

struct int_list *init_int_list(){
    struct int_list *l;
    l = malloc(sizeof(struct int_list));
    l->head = NULL;
    l->last = NULL;
    l->size = 0;
    return l;
}

void remove_last(struct int_list *list){
    
}

struct node* get_node(struct node *start ,int index){
    struct node *nptr;
    nptr = start;
    if(nptr->index == index){
        return nptr;
    }
    if(nptr->next == NULL) {
        return NULL;
    }
    get_node(nptr->next, index);
    
}

int get(struct int_list *list, int index){
    struct node *nptr;
    nptr = get_node(list->head, index);
    if (nptr == NULL){
        printf("ERROR: Index out of range!\n");
        exit(1);
    }
    return nptr->data;
}

void remove_at(struct int_list *list, int index){

}

void cleanup_pointer(void **p){
    free(*p);
    *p = NULL;
}

void check_pointer(void *p){
	if(p == NULL){
		printf("Pointer is NULL!\n");
		exit(1);
	}
}