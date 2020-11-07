int main()
{
    int k;
    scanf("%d ", &k);
    while (k--)
    {
        int n;
        char s[1000][1000];
        int arr[1000] = {0};
        scanf("%d ", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%s ", &s[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(s[i], s[j]) == 0)
                {
                    arr[i]++;
                }
            }
        }
        int max = 0, index = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == max)
            {
                if (strcmp(s[i], s[index]) < 0)
                {
                    max = arr[i];
                    index = i;
                }
            }

            if (arr[i] > max)
            {
                max = arr[i];
                index = i;
            }
        }
        printf("%s %d\n", s[index], (arr[index]) + 1);
    }
}