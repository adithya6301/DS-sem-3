#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct stack
{
    char stack[100];
    int top;
}S;

S s;

void push(char i)
{
    s.stack[++s.top]=i;
}

char pop()
{
    return s.stack[s.top--];
}

int main()
{
    s.top = -1;
    char str[100];
    int isPalindrome=1;
    printf("\nEnter String: ");
    scanf("%s",str);

    for(int i=0;i<strlen(str);i++)
    {
        push(str[i]);
    }

    //Checking if palindrome
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=pop())
        {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome)
    {
        printf("\nThe given word is palindrome.");
    }
    else
    {
        printf("\nThe given word is not a palindrome.");
    }
    return 0;
}
