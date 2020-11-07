void swap(int *one, int *two)
{
    int temp = *one;
    *one = *two;
    *two = temp;
}
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int size;
        scanf("%lld", &size);
        long long int arr[size];
        for (long long int i = 0; i < size; i++)
        {
            scanf("%lld", &arr[i]);
        }
        for (long long int i = 0; i < size - 1; i += 2)
        {
            swap(&arr[i], &arr[i + 1]);
        }
        for (long long int i = 0; i < size; i++)
        {
            printf("%lld ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}