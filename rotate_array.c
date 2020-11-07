int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int size, key;
        scanf("%lld %lld", &size, &key);
        long long int arr[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%lld", &arr[i]);
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[key % size]);
            key++;
        }
        printf("\n");
    }
    return 0;
}