#include <stdio.h>
char s[100];
int top_of_stack = -1;
void push(char a)
{
    s[++top_of_stack] = a;
}

char pop()
{
    if (top_of_stack == -1)
        return -1;
    else
        return s[top_of_stack--];
}

int precedence(char a)
{
    if (a == '(')
        return 0;
    if (a == '+' || a == '-')
        return 1;
    if (a == '*' || a == '/')
        return 2;
}

void main()
{
    char expression[20];
    char *exp, a;
    printf("Enter the expression you want to convert:  ");
    scanf("%s", expression);
    exp = expression;
    while (*exp != '\0')
    {
        if (isalnum(*exp))
            printf("%c", *exp);
        else if (*exp == '(')
            push(*exp);
        else if (*exp == ')')
        {
            while ((a = pop()) != '(')
                printf("%c", a);
        }
        else
        {
            while (precedence(s[top_of_stack]) >= precedence(*exp))
                printf("%c", pop());
            push(*exp);
        }
        exp = exp + 1;
    }
    while (top_of_stack != -1)
    {
        printf("%c", pop());
    }
}