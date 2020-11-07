#include <stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int stack[200],sindex=0;
        char s[401];
        scanf("%s",&s);
        for(int i=0;i<strlen(s);i++)
        {
            
            if(s[i]==')')
            {
                 while(stack[--sindex]!='(')
                {
                  printf("%c",stack[sindex]);
                }
            }
            if(isalpha(s[i]))
            {
                printf("%c",s[i]);
            }
            else
            {
                if(s[i]!=')')
                    stack[sindex++]=s[i];
            }
        }
        printf("\n");
    }
	return 0;
}