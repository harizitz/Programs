int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int size, sum = 0, ans = -1;
        scanf("%lld ", &size);
        long long int arr[size], sum1[size], sum2[size];
        for (long int i = 0; i < size; i++)
        {
            scanf("%lld ", &arr[i]);
        }
        for (long int i = 0; i < size; i++)
        {
            sum += arr[i];
            sum1[i] = sum;
        }
        sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[size - 1 - i];
            sum2[size - 1 - i] = sum;
        }
        for (int i = 0; i < size; i++)
        {
            if (sum1[i] == sum2[i])
            {
                ans = i + 1;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}