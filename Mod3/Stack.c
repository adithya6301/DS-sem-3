#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 100
typedef struct arr
{
    char Stack[MAX];
    int top;
}s;

s st;

bool isFull(s st)
{
    return (st.top == MAX-1);
}

bool isEmpty(s st)
{
    return (st.top==-1);
}

void push(int elt)
{
    if(isFull(st))
    {
        printf("\nStack overflow!");
        return;
    }
    st.Stack[++st.top]=elt;
    printf("\nPushed successfully");
    return;
}

void pop()
{
    if(isEmpty(st))
    {
        printf("\nStack Empty!");
        return;
    }
    else
    {
        st.top--;
    }
}

void peak()
{
    if(isEmpty(st))
    {
        printf("\nStack Empty!");
        return;
    }
    printf("\n%d",st.Stack[st.top]);
    return;
}

void display()
{
    if(isEmpty(st))
    {
        printf("\nStack Empty!");
        return;
    }
    else
    {
        for(int i=st.top;i>-1;i--)
        {
            printf("\n%d",st.Stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int ch,data;
    st.top=-1;
    while(1){
        printf("\nMENU\n1.Push\n2.Pop\n3.Display\n4.Peak\n10.Exit\nEnter Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nData: ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peak();
            break;
        case 10:
            printf("\n Exit successfull");
            exit(1);
            break;
        default:
            printf("\nInvalid choice");
    }

    }
}
