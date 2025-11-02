#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* top = NULL;

Node* createNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode==NULL)
    {
        printf("Stack overflow!");
        exit(1);
    }
    newNode->next=NULL;
    newNode->data=data;
    return newNode;
}
void push(int n)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode==NULL)
    {
        printf("Stack overflow!");
        return;
    }
    newNode->next=top;
    newNode->data=n;
    top=newNode;
    printf("\nPush sucessfull");
    return;
}

void pop()
{
    if(top==NULL)
    {
        printf("Stack underflow");
        return;
    }
    Node* temp = top;
    printf("Element popped %d",top->data);
    top=top->next;
    free(temp);
    return;
}

void peek()
{
    if(!top)
    {
        printf("\nStack empty");
        return;
    }
    printf("\n%d",top->data);
    return;
}
void display()
{
    if(!top)
    {
        printf("\nStack empty");
        return;
    }
    Node* temp = top;
    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
    printf("\nNULL");
    return;
}
int main()
{
    int ch,data;
    while(1)
    {
        printf("\nMenu\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter elt to push: ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("\nInvalid choice!!!");
        }
    }
}
