
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int size, p = 0;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < size; i++)
        {
            int f = 0;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    f = 1, p = 1;
                    printf("%d\n", i + 1);
                    break;
                }
            }
            if (f == 1)
            {
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