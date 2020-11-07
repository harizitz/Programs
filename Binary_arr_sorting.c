int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int size;
        scanf("%lld", &size);
        long long int arr[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%lld", &arr[i]);
        }
        for (int i = 0, j = size - 1; i <= j;)
        {
            if (arr[i] == 1 && arr[j] == 0)
            {
                arr[i] = 0;
                arr[j] = 1;
            }
            while (arr[j] != 0)
            {
                j--;
            }
            while (arr[i] != 1)
            {
                i++;
            }
        }
        for (int i = 0; i < size; i++)
        {
            printf("%lld ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}