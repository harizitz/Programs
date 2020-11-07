
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int size, arr[28] = {0}, f = 1;
        scanf("%d", &size);
        char s[size];
        scanf("%s", s);
        for (int i = 0; i < size; i++)
        {
            arr[s[i] - 'a']++;
        }
        for (int i = 0; i < size; i++)
        {
            if (arr[s[i] - 'a'] == 1)
            {
                printf("%c\n", s[i]);
                f = 0;
                break;
            }
        }
        if (f == 1)
        {
            printf("-1\n");
        }
    }
    return 0;
}