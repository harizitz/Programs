
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int size, arr[100000] = {0}, max = 0, f = 0;
        scanf("%lld", &size);
        for (int i = 0; i < size; i++)
        {
            scanf("%lld", &max);
            arr[max]++;
            if (arr[max] > size / 2 && f == 0)
            {
                printf("%lld\n", max);
                f = 1;
            }
        }
        if (f == 0)
        {
            printf("-1\n");
        }
    }
    return 0;
}