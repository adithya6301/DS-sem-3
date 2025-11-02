#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
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
    if(s.top==-1)
        return '\0';
    return s.stack[s.top--];
}

bool compare(char i, char n)
{
    if((i=='(' && n==')')||(i=='[' && n==']')||(i=='{' && n=='}'))
        return 1;
    else
        return 0;
}
int main()
{
    s.top=-1;
    char str[100];
    int balanced = 1;
    printf("\nEnter String: ");
    scanf("%s",&str);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]== '(' || str[i]== '{' || str[i]== '[')
            {
                push(str[i]);
            }
        else if(str[i]== ')' || str[i]== '}' || str[i]== ']')
        {
            if(!compare(pop(),str[i]))
            {
                balanced=0;
                break;
            }
        }
    }
    if(balanced)
        printf("\nThe given string is balanced.");
    else
        printf("\nNot balanced.");
    return 0;
}
