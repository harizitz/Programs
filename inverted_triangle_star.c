
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int k;
        scanf("%d", &k);
        for (int i = k * 2 - 1, x = 1; i > 0; i -= 2, x += 2)
        {
            for (int j = i; j >= 1; j--)
            {
                printf("*");
            }
            for (int j = 1; j <= x; j++)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}