#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
//define function
void linkedlisttraversal(struct Node *ptr){
    while(ptr!= NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}
struct Node * insertatfirst(struct Node* head,int value){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = value;
    return ptr;
}
struct Node * insertatindex(struct Node * head,int value,int index){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while(i!= index - 1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = value;
    return head;

}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;

//allocate memory for linked list in heap memory
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
// linked linked list with second linked list
    head->data = 7;
    head->next = second;
    

    second->data = 4;
    second->next = third;
    

    third->data = 5;
    third->next = NULL;
    //function calling
    linkedlisttraversal(head);
    //head=insertatfirst(head,12);
    insertatindex(head,54,2);
    linkedlisttraversal(head);
    return 0;
}
