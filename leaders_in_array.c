
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long size, index = 0;
        scanf("%ld", &size);
        long arr[size], ares[size];
        for (long i = 0; i < size; i++)
        {
            scanf("%ld", &arr[i]);
        }
        long max = arr[size - 1];
        for (int i = size - 1; i >= 0; i--)
        {
            if (arr[i] >= max)
            {

                max = arr[i];
                ares[index++] = max;
            }
        }
        for (int i = 0; i < index; i++)
        {
            printf("%ld ", ares[index - i - 1]);
        }
        printf("\n");
    }
    return 0;
}