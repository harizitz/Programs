#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int size1, size2;
        scanf("%d %d", &size1, &size2);
        int ar1[size1], ar2[size2];
        for (int i = 0; i < size1; i++)
        {
            scanf("%d", &ar1[i]);
        }
        for (int i = 0; i < size2; i++)
        {
            scanf("%d", &ar2[i]);
        }
        int p = 0;
        for (int i = 0; i < size2; i++)
        {
            int f = 0;
            for (int j = 0; j < size1; j++)
            {
                if (ar1[j] == ar2[i])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                p = 1;
                printf("No\n");
                break;
            }
        }
        if (p == 0)
        {
            printf("Yes\n");
        }
    }
    return 0;
}