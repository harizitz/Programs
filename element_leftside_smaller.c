
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int size;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        int f = 0, key = 0;
        for (int i = 1; i < size - 1; i++)
        {
            f = 0;
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[i])
                {
                    f = 1;
                    break;
                }
            }
            if (f != 1)
            {
                for (int j = i + 1; j < size; j++)
                {
                    if (arr[j] < arr[i])
                    {
                        f = 1;
                        break;
                    }
                }

                if (f == 0)
                {
                    printf("%d\n", arr[i]);
                    key = 1;
                    break;
                }
            }
        }
        if (key == 0)
        {
            printf("-1\n");
        }
    }
    return 0;
}