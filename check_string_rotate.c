#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char s1[1000], s2[1000];
        scanf("%s %s", s1, s2);
        int len = strlen(s1), r, f = 0;
        for (int i = 0; i < len; i++)
        {
            r = i, f = 0;
            for (int j = 0; j < len; r++, j++)
            {
                if (s1[j] != s2[r % len])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                break;
            }
        }
        if (f == 0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}