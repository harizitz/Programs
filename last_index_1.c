
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char s[100000];
        int p = 0;
        scanf("%s", s);
        int len = strlen(s);
        for (int i = len - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                p = 1;
                printf("%d\n", i);
                break;
            }
        }
        if (p == 0)
        {
            printf("-1\n");
        }
    }
    return 0;
}